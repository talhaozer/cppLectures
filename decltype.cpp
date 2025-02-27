#include <iostream>
#include <typeinfo>
using namespace std;
int main(){

    /*const int ci = 0 , &cj = ci;

    decltype(cj) x = 0;
    decltype(cj) y = x;
    

    cout<< typeid(ci).name()<<endl;
    cout<< typeid(x).name()<<endl;
    cout<< typeid(y).name()<<endl;
    
    cout<< typeid(cj).name()<<endl;
    cout<< x ;
    */

    int i = 42 , *p = &i, &r=i;
    decltype(r+0) b;
    decltype(*p)c = i;
    decltype((i)) d = i;
    decltype(i) e;
    
    
    cout<< typeid(i).name()<<endl;
    cout<< typeid(p).name()<<endl;
    cout<< typeid(r).name()<<endl;
    cout<< typeid(b).name()<<endl;
    cout<< typeid(c).name()<<endl;

    cout<<"i = "<< i << endl;
    cout<<"p = "<< p << endl;
    cout<<"r = "<< r << endl;
    cout<<"b = "<< b << endl;
    cout<<"c = "<< c << endl;
    cout<<"d = "<< d << endl;
    cout<<"e = "<< e << endl;




    return 0 ;











}
