#include <iostream>
#include <vector>

using namespace std;
int main(){

    vector <int> v;


    int a ;
    cin >>a;
    for (int i = 0; i <= a; i++)
    {
        v.push_back(i);
  
    }
    for(int x:v)

        cout << x<<endl;













    return 0;
}