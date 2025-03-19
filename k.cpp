#include <iostream>
#include <vector>
#include <ctime>
#include <conio.h>
#include <thread>
#include <chrono>
#include <windows.h>
#include <unistd.h>
using namespace std;
int width=60;
int lines=10;
vector <int> v;
int height=10;
int barrier[6]={10,20,30,40,50,60};
int x=3;
int y=5;
int r;
int score;
bool gameOver;
int fruitX=4,fruitY=5;
enum direction{STOP=0,DOWN,UP};
direction dir;
void gameSetup(){
    srand(time(0));
    gameOver =false;
    dir = STOP;
}
void gameBoard(){
    system("cls");
    for(int i=0;i<width;i++){
        cout <<"_";
    }cout<<"                             score: "<<score <<endl;
 
    srand(time(0));
    for(int i=0;i<6;i++){ 
            
            r=rand()%10+1;
            v.push_back(r);
            }
           
    for(int k =0;k<6;k++){
        for(int j=0;j<height;j++){
            for(int i =0;i<width;i++){
           
                if(barrier[k]==i&&j!=v[k]){
                    cout <<"|";
                }
                else if(fruitX==i&&fruitY==j){
                    cout<<"F";
                }
                else if(x==i&&y==j){
                    cout<<"O";
                }
                else{cout<<" ";
                }
        }cout<<endl;

    }
    for(int i =0;i<width;i++){
        if (i==barrier[k]){
            cout<<"|";
        }else{
        cout<<"_";}
    }
    // Move cursor up 1 line
    cout << "\033[10A";
 
    
}
}
void gameLogic(){
    if(_kbhit()){
        switch (_getch())
        {
        case 'w':
            dir=UP;
            break;
        case 's':
            dir=DOWN;
            break;
        default:
            break;
        }
        switch (dir)
        {
        case UP:
            y--;
            break;
        case DOWN:
            y++;
        break;
        default:
            break;
        }
    }
    for(int k =0;k<6;k++){
        barrier[k]--;
        
        if(barrier[k]<=0){
            barrier[k]=width;
        }
        else if(fruitX==x&&fruitY==y){
            fruitX=rand()%width;
            fruitY=rand()%height;
            score+=10;
        }
        else if(barrier[k]==x&&v[k]!=y){
            gameOver = true;
        }
    }
    fruitX--;



}
int main(){
    gameSetup();
    while(!gameOver){
        gameBoard();
        gameLogic();
        Sleep(500);
    }
    return 0;
}

