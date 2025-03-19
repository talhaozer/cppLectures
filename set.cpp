#include <iostream>
#include <set>
#include <string>
using namespace std;

int costumerId;
set<int,greater <int>> costumerIdList;

void xd() {
    cout << "Enter costumer ID: ";
    while (cin >> costumerId) {
        if (costumerIdList.find(costumerId) != costumerIdList.end()) {
        cout << "Costumer ID already exists. so your order will be delayed " << endl;
        }
        costumerIdList.insert(costumerId);
        cout << "Current queue is :";

        for (const auto &b : costumerIdList) {
        cout << b << " ";
        }
        cout << endl << "Enter costumer ID: ";
    }
}

int main() {
    xd();
    return 0;
}






