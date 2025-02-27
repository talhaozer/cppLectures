#include <iostream>
#include <typeinfo>
using namespace std;
int main (){


   /* int a = 2;

    int &g = a;

    const int *const b = &a;

    cout << g <<endl;

    cout << *b <<endl;

    const int pi = 3;

    double pii = 3.14;

    const  int  &dval = pii;


    const int *x = &pi;

    const int con = 290 ;
 
int i = 0 ;
int *const pi = &i;


const int ci = 42;

const int *p2 = &ci;
const int *const p3 = p2;

cout << *p2 << ci << p3;

*/

typedef double wages;
wages talha = 10;
typedef float percent ;
percent sskfg = 10.1;   


using letter = char; 
using num = int;
num dogg = 10;

letter dog ='a';


auto sum = talha + sskfg;

cout << "sum = "<< sum << endl;
cout << "type of sum = "<< typeid(sum).name()<< endl;



typedef char *pstring ; 

const pstring cstr =0 ;

const pstring *ps;


























return 0 ;












}