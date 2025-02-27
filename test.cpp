#include <iostream>
using namespace std;
int main(){
    cout <<"enter a number that you want to take factorial : "<<endl;
  
int i;
int number;
cin >> number;    
int islem =1 ; 
if (number==0)
{
    cout << "Answer is : 1 "<< endl;
    }
else{
i =number;
    for (  i ; i >1; i--)
    {
        
        islem *= i;   
        
        
        
         }
         cout << "the factorial of "<< number << " is : "<< islem;
         }
   


return 0 ;
 
 
}