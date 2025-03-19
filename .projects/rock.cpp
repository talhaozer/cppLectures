#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void playersChoise(int player1){

    if(player1 == 1){
        cout << "Player 1 chose Rock" << endl;
    }else if(player1 == 2){
        cout << "Player 1 chose Paper" << endl;
    }else if(player1 == 3){
        cout << "Player 1 chose Scissors" << endl;
    }
    else{
        cout << "Invalid choice!" << endl;
    }
};



void computersChoise(int computer){
    if(computer == 1){
        cout << "Computer chose Rock" << endl;
    }else if(computer == 2){
        cout << "Computer chose Paper" << endl;
    }else if(computer == 3){
        cout << "Computer chose Scissors" << endl;
    }
};

void winner(int player1, int computer){

    switch (player1)
    {
    case 1:


        if(computer == 1){
            cout << "It's a tie!" << endl;
        }else if(computer == 2){
            cout << "Computer wins!" << endl;
        }else if(computer == 3){
            cout << "Player 1 wins!" << endl;
        }
        break;
    case 2:
        if(computer == 1){
            cout << "Player 1 wins!" << endl;
        }else if(computer == 2){
            cout << "It's a tie!" << endl;
        }else if(computer == 3){
            cout << "Computer wins!" << endl;
        }
        break;
    case 3:
        if(computer == 1){
            cout << "Computer wins!" << endl;
        }else if(computer == 2){
            cout << "Player 1 wins!" << endl;
        }else if(computer == 3){
            cout << "It's a tie!" << endl;
        }
        break;      
    default:
        break;
    }
};
void drawline(int n, char symbol){
    
    for(int i = 0; i <= n; i++){
        cout << symbol<<endl;
        
    }
};
   

int main(){
    drawline(60, '-');
    cout << endl <<"Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Player 1, please choose your weapon: " << endl;
    drawline(60, '-');
    cout << endl << "1  = Rock" << endl;
    cout << "2 = Paper" << endl;
    cout << "3 =  Scissors" << endl;


    int player ;
    cin >> player;
    srand(time(0));
    int computer = rand() % 3 + 1;

    playersChoise(player);
    computersChoise(computer);
    winner(player, computer);

   
return 0;

}