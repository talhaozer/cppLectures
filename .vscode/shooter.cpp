#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <vector>
using namespace std;
vector <int> bulletsX,bulletsY;
vector <int> rocks;
vector <int> rocksY;
bool print; 
int r;
int leftBullet;
int cntOfbullet=0;
int bulletX,bulletY;
int width=30;
int height =20;
bool isbullet;
int personX=15,personY=19;
bool gameOver=false;
enum direction{STOP=0,RİGHT,LEFT};
direction DİR;
void setup(){
    srand(time(0));
    DİR=STOP;
    gameOver=false;
}
void gameBoard() {
    system("cls");

    for (int i = 0; i < height; i++) {
        for (int k = 0; k < width; k++) {
            if (k == 0 || k == width - 1) {
                cout << "|";
                if(i==0&&k==width-1){
                    cout <<"              spent bullets :  "<<cntOfbullet;
                }
            } else {
                bool printed = false;
                

                
                for (int j = 0; j < bulletsX.size(); j++) {
                    if (i == bulletsY[j] && k == bulletsX[j]) {
                        cout << "o";
                        printed = true;
                        break;
                    }
                }

                
                for (int b = 0; b < rocksY.size(); b++) {
                    if (rocksY[b] == i && rocks[b] == k) {
                        cout << "#";
                        printed = true;
                        break;
                    }
                }

                
                if (personX == k && personY == i) {
                    cout << "M";
                    printed = true;
                }

                if (!printed) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
void gameLogic(){
       if (_kbhit()) {
            switch (_getch()) {
                case 'a':
                    if (personX > 1) personX--;
                    break;
                case 'd':
                    if (personX < width - 2) personX++;
                    break;
                case 'o':
                    bulletsX.push_back(personX);
                    bulletsY.push_back(personY - 1);
                    cntOfbullet++;
                    break;
            default:
            break;
        }
    }
    for(int i =0;i<bulletsX.size();i++){
        bulletsY[i]--;
        if (bulletsY[i] < 0) {
            bulletsY.erase(bulletsY.begin() + i);
            bulletsX.erase(bulletsX.begin() + i);
            i--;
        }       
    }
    for (int i = 0; i < rocksY.size(); i++) {
        rocksY[i]++;
        if (rocksY[i] >= height) {
            rocksY.erase(rocksY.begin() + i);
            rocks.erase(rocks.begin() + i);
            i--;
        }
    }
    if(rand()%10<2){
        rocksY.push_back(0);
        r=rand()%(width-1)+1;
        rocks.push_back(r);
    }

    for(int i=0;i<bulletsX.size();i++){
        for(int j =0;j<rocks.size();j++){
            if(bulletsX[i]==rocks[j]&&bulletsY[i]==rocksY[j]){
                bulletsX.erase(bulletsX.begin()+i);
                bulletsY.erase(bulletsY.begin()+i);
                rocks.erase(rocks.begin() + j);
                rocksY.erase(rocksY.begin() + j);
                i--;
            }
        }
    }
    for (int i = 0; i < rocks.size(); i++) {
        if (rocksY[i] == personY && rocks[i] == personX) {
            gameOver = true;
        }
    }

    

}
int main(){
    setup();
    while(!gameOver){
        gameBoard();
        gameLogic();
        Sleep(100);
    }
    return 0;

}