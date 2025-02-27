#include <iostream>
#include <string>
using namespace std;

int main (){

/*
    string readme ("Hello!! There...");
    int punct=0;
    for(auto ch : readme){

    if(ispunct(ch)){
        punct++;

    }
               }             
    cout << "count of the punctuation is = "<< punct<< endl;
*/     

string readme ("hello world");

for (int i = 0; i != readme.size() &&  !isspace(readme[i]); i++)
{
    readme[i] = toupper(readme[i]);

}
cout << readme << endl;



    return 0 ;

}


