#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool gameOver;
string word ;
char guessed;
char guessedd;
string wordd;
int cnt = 0;
void displayWord(){
    cout << "Word: "<<word;
}
void worddd(){
    cout << endl;
    for (char c : wordd){
        cout << c;
    }
    
}
int main() {
    cout << "Enter a word: ";
    cin >> word;
    wordd.resize(word.size(), '_');
    displayWord();
    worddd();
  



    while(!word.empty()){
        
    
    cout <<endl<< "Guess a letter: ";
    cin >> guessed;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == guessed) {
            wordd[i] = guessed;
            cnt++;
        }

    }
    cout << "letter: " << guessed << " occurs " << cnt << " times" << endl;
    cnt = 0;
    for (int i = 0; i < word.size(); i++) {
        cout << wordd[i];
    }
 
    
   
    if(wordd == word){
        cout << " You win!";
        
        break;

    }
    else{
        cout <<endl<< "keep trying!";
    }
    }
return 0;
};



