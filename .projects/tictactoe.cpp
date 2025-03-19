#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
char player1='X';
char player2 ='Y';
bool gameover;
srand(time(0));
int a = rand()%2+1;
int position;
char numbers[10] = {'o','1','2','3','4','5','6','7','8','9'};
void rules(){

    if (numbers[1]==numbers[2]&&numbers[2]==numbers[3])
    { 
        if(numbers[1]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }}
    }else if (numbers[4]==numbers[5]&&numbers[5]==numbers[6])
    { 
        if(numbers[4]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
       
    }
    else if (numbers[7]==numbers[8]&&numbers[8]==numbers[9])
    { 
        if(numbers[7]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
        
    }
    else if (numbers[1]==numbers[4]&&numbers[4]==numbers[7])
    { 
        if(numbers[1]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
        
    }
    else if (numbers[2]==numbers[5]&&numbers[5]==numbers[8])
    { 
        if(numbers[2]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
       
    }
    else if (numbers[3]==numbers[6]&&numbers[6]==numbers[9])
    { 
        if(numbers[3]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
      
    }
   
    else if (numbers[1]==numbers[5]&&numbers[5]==numbers[9])
    { 
        if(numbers[1]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
       
    

    else if (numbers[3]==numbers[5]&&numbers[5]==numbers[7])
    { 
        if(numbers[3]==player1){
            cout<< "The game is over player1 won!"<<endl;
        }
        else{
            cout<<"The game is over player2 won!"<<endl;
        }
    }
    
    else if(numbers[1]!='1'&&numbers[2]!='2'&&numbers[3]!='3'&&numbers[4]!='4'&&numbers[5]!='5'&&numbers[6]!='6'&&numbers[7]!='7'
        &&numbers[8]!='8'&&numbers[9]!='9')
        {
            gameover= true;
            cout<<"The game is over no one won!"<<endl;
           
        }

    
    }

void players(){

    if (a==1){
        cout<< "palyer1 is starting"<<endl<<"which position you want to put X ?";
        cin>>position;
        switch (position)
        {
        case 1:
            numbers[1] =player1;
            break;
        case 2:
            numbers[2] =player1;
            break;
        case 3:
            numbers[3] =player1;
            break;
        case 4:
            numbers[4] =player1;
            break;
        case 5:
            numbers[5] =player1;
            break;
        case 6:
            numbers[6] =player1;
            break;
        case 7:
            numbers[7] =player1;
            break;
        case 8:
            numbers[8] =player1;
            break;
        case 9:
            numbers[9] =player1;
            break;
        

        default:
            break;
        }

    }
    else{
        cout<<"player2 starting"<<endl<<"which position you want to put Y?";
         
        cin>>position;
        switch (position)
        {
        case 1:
            numbers[1] =player2;
            break;
        case 2:
            numbers[2] =player2;
            break;
        case 3:
            numbers[3] =player2;
            break;
        case 4:
            numbers[4] =player2;
            break;
        case 5:
            numbers[5] =player2;
            break;
        case 6:
            numbers[6] =player2;
            break;
        case 7:
            numbers[7] =player2;
            break;
        case 8:
            numbers[8] =player2;
            break;
        case 9:
            numbers[9] =player2;
            break;
        

        default:
            break;
        }





    }









};

void board(){
    system("cls");
    cout <<endl<< "       WELCOME TIC TAC TOE ...    " <<endl<<endl;
    cout << "       |       |        "<<endl;

    cout << "   "<<numbers[1]<<" "<< "  |  " <<" "<<numbers[2]<<" "<< "  | " << "  "<<numbers[3]<<" " <<endl;

    cout<< "_______|_______|_______"<<endl;

    cout << "       |       |        "<<endl;

    cout << "   "<<numbers[4]<<" "<< "  |  " <<" "<<numbers[5]<<" "<< "  | " << "  "<<numbers[6]<<" " <<endl;

    cout<< "_______|_______|_______"<<endl;
 
    cout << "       |       |        "<<endl;

    cout << "   "<<numbers[7]<<" "<< "  |  " <<" "<<numbers[8]<<" "<< "  | " << "  "<<numbers[9]<<" " <<endl;

    cout << "       |       |        "<<endl;

};
int main(){
while(true){
board();
players();
rules();


}



return 0;
};