#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Example {
private : 

int b;

public :

int  setB(int a) {

b=a;
return 0;
}
    int getB() {


        return b;
    }


};
    int main() {

        Example x;
        x.setB(5);
        cout << x.getB() << endl;



      
    }