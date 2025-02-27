#include <iostream>
using namespace std;
int main(){

/*bool a = 0;
int x = a;
x=3.80;

double h= 3.60 ;

cout << h << endl;


unsigned char k = -1 ;

cout<< k << endl;

string y = "adksga";
cout << y <<endl;

*/


int currval = 0;
    int val= 0;
    int cnt =1;

    if (cin >> currval)
    {
      while (cin >> val)
      {
        if (currval ==  val)
        {
          ++cnt;
        }
        else{
          cout << currval << "occurs "<< cnt << " times."<< endl;
          currval = val;
          cnt = 1;
            }
        
      }
      
    }
     cout << "nothing entered."<<endl;

    return 0;















}