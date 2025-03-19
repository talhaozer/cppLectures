#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;
    boolean gameOver;

    int height = 20;
    int width =20;
    int x,y,fruitX,fruitY,score;
    int tailX[100],tailY[100],nTail;
    

    enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
    eDirection dir;

   void setup(){
    gameOver = false;
    dir = STOP;
        x = width/2;
        y = height/2;
     
        fruitX = rand() % width;
        fruitY = rand() % height;
        score = 0;
    };

void draw(){

    system("cls");
    for(int i=0; i<width+2; i++){
        cout << "#";
    }cout << endl;

    for(int j=0;j<height;j++){
        for (int i= 0;i < width ; i++){
            if(i==0 || i == width-1){
                cout << "#";
            }
            if(i==x && j==y){
                cout << "O";
              
            }
            
            else if(i==fruitX&&j==fruitY){
                cout << "F";
            }
        
        
            else
            {
                bool print = false;
                for(int t = 1;t<nTail;t++){
                    if(tailX[t]==i&&tailY[t]==j){
                        cout << "o";
                        print = true;
                    }
                }
                if(!print==true){
                    cout << " ";
                }
                
            }
           
        }
        cout << endl;
    }

    for(int i = 0;i<width+2;i++){
        cout << "#";
    }cout << endl;
    cout << "Score: " << score << endl;


};

void input(){
    char c;
    if(_kbhit()){
        switch (_getch())
        {
            
        case 'w': dir = UP;
            break;
        case 's': dir = DOWN;
            break;
        case 'a': dir = LEFT;
            break;
        case 'd': dir = RIGHT;
            break;
            default:
            break;
    }
}
};

void logic(){
    tailX[0] = x;
    tailY[0] = y;
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    for(int i =1;i<nTail;i++){
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }


    

    switch(dir){
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        default:
            break;
    }


if(x>width||x<0||y>height||y<0){
    if (y>height){
        y=0;
    }
    else if(y<0){
        y=height;
    }
    else if(x>width){
        x=0;
    }
    else if(x<0){
        x=width;
    }

}
if(x==fruitX&&y==fruitY){

    score += 10;
    fruitX = rand() % width;
    fruitY = rand() % height;
    nTail++;
    
}
};



int main(){
    while(!gameOver){
        draw();
        input();
        logic();
        Sleep(200);
    }
    return 0;
}




