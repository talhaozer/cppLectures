#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;


int a = 0;
int b = 0;
void tryy(){    
    
    cout << "Enter costumer ID: ";
    
    int costumerId;

    vector <int> costumerIdList;
      
    while (cin >> costumerId)
    {
    costumerIdList.push_back(costumerId);

    for (int i = 0; i < costumerIdList.size()-1; i++)
    {
        if (costumerId == costumerIdList[i])
        {
            cout << "Costumer ID already exists. so your order will be delayed " << endl;
            
            costumerIdList.erase(costumerIdList.begin() + i);
            
            costumerIdList.push_back(costumerId);
            break;     
        }
        
    }
    cout << "Current queue is :" ;

            for (const auto &b : costumerIdList)
            {
                cout << b << " ";
            }
    
    cout << endl<< "Enter costumer ID: ";

    };
};
    
int main()
{
    tryy();
    return 0;
}


