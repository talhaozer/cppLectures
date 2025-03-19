#include <iostream>
#include <ctime>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;
int cnt;
int cn2;
int score = 0;
int a;
int b;
int width = 61;
int height = 10;
int fruitX;
int fruitY;
int x=3;
int y=5;
int barrier1=11;
bool gameOver;
int barrier6=1;
int barrier2=21;
int barrier3=31;
int barrier4=41;
int barrier5=51;
enum direction{STOP =0,UP,DOWN};
direction dir;
void setup(){

    srand(time(0));
    a =rand()%6+1;
    if(a==1){
        fruitX = 10-cnt + rand() %(3);
        fruitY =5+ rand ()%(2);
    }
    else if(a==2){
        fruitX = 20 + rand() %(3);
        fruitY =3+ rand ()%(2);
    }
    else if(a==3){
        fruitX = 30 + rand() %(3);
        fruitY =7+ rand ()%(2);
    }
    else if(a==4){
        fruitX = 40 + rand() %(3);
        fruitY =3+ rand ()%(2);
    }
    else if(a==5){
        fruitX = 50 + rand() %(3);
        fruitY =5+ rand ()%(2);
    }
    else{
        fruitX = 0 + rand() %(3);
        fruitY =1+ rand ()%(2);

    }
    
    gameOver = false;
    dir =STOP;
}
void gameBoard(){
   


    system("cls");

    for(int i = 0;i<width;i++){
        cout<<"_";
    }
    cout<<"                            score : "<<score;
    cout<<endl;

    for(int j =0;j<height;j++){
        for(int i =0;i<width;i++){
            if(i==barrier1&&j!=5&&j!=6){
                cout<<"|";
            }
            else if(i==barrier2&&j!=3&&j!=4){
               
                cout<<"|";
            
            }
            else if(i==barrier3&&j!=8&&j!=7){
               
                cout<<"|";
            }
            else if(i==barrier4&&j!=3&&j!=4){
                
                cout<<"|";
                
            }
            else if(i==barrier6&&j!=1&&j!=2){
                cout<<"|";

            }
            else if(i==barrier5&&j!=5&&j!=6){
                cout<<"|";
            }         
            
            else if(x==i&&y==j){
                cout<<"O";
            }

            else if(fruitX==i&&fruitY==j){
                cout<< "F";
            }
            else{
                cout<<" ";
            }

        }

        cout<<endl;
    }

    for(int i = 0;i<width;i++){
        if(i==barrier1||i==barrier2||i==barrier3||i==barrier4||i==barrier5||i==barrier6){
            cout<<"|";
        }else{
        cout<<"_";
        }
    }
    




}
void gameLogic(){
    
if(_kbhit())
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
    default:
        break;
    }

    barrier1--;
    barrier2--;
    barrier3--;
    barrier4--;
    barrier5--;
    barrier6--;
    fruitX--;
    cnt++;
    if(barrier1==0){
        barrier1=width;
    }
    
    if(barrier1==0){
        barrier1=width;
    }
    if(barrier2==0){
        barrier2=width;
    }
    if(barrier3==0){
        barrier3=width;
    }
    if(barrier4==0){
        barrier4=width;
    }
    if(barrier5==0){
        barrier5=width;
    }
    if(barrier6==0){
        barrier6=width;
    }
    if(fruitX==0){
        fruitX=width;
    }

    if(x==fruitX && y==fruitY){
        fruitX = rand()%width;
        fruitY= rand()%height;

        score=score+10;
    }



    if(barrier1==x||barrier2==x || barrier3==x || barrier4==x||barrier5==x||barrier6==x){

        if(barrier1==x){
            if(y==5||y==6){
            gameOver = false;
        }else{
            gameOver =true;
        }
            
        }
        else if(barrier2==x){
            if(y==3||y==4){
                gameOver = false;
            }else{
            gameOver = true;    
        }
        }
        else if(barrier3==x){
            if(y==8||y==7){
            gameOver = false;}
            else{
                gameOver=true;
            }
        }
        else if(barrier4==x){
            if(y==4||y==3){
            gameOver = false;
        }
            else{
                gameOver=true;
            }
        }
        else if(barrier5==x){
            if(y==5||y==6){
            gameOver = false;}
            else{
                gameOver=true;
            }
        }
        else if(barrier6==x){
            if(y==1||y==2){
            gameOver = false;}
            else{
                gameOver=true;
            }

        }

        

    }

}

int main(){
    
    setup();
    while(!gameOver){
    dir=STOP;
    gameBoard();
    gameLogic();
    Sleep(100);
    }
return 0;
}