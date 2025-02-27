#include <iostream>
#include <vector>
using namespace std;
int main(){

    string paragraph;
    

    vector <string> name;

    while ( cin>>paragraph)
    {
       name.push_back(paragraph);
    }

    for (string x : name)
    cout << x << endl;
    



    return 0;
}