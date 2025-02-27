#include <iostream>
#include <string>   
using namespace std ;

int main (){
    string readme;
    while (getline(cin,readme))
    {
        if(!readme.empty()){

            cout << "The string is : "<< endl;
            cout << readme<< endl;
        }
        


        else{
            cout << "The string is empty."<<endl;
            

            }

    }



    

    return 0;

}