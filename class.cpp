#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <string>
using namespace std;

class vehicle{

String brand = "Audi"; 
int year = 2021;
String color = "Black";
int price = 50000;


};

class car : public vehicle{
    int numofdoors = 4;
    int numofwheels = 4;
    String type = "Sedan";
    String fueltype = "Gasoline";
   
};

int main(){
    
    car mycar;
    cout << mycar.brand << endl;
    cout << mycar.year << endl;
    cout << mycar.color << endl;
    cout << mycar.price << endl;
    cout << mycar.numofdoors << endl;
    cout << mycar.numofwheels << endl;
    cout << mycar.type << endl;
    cout << mycar.fueltype << endl;
    return 0;
}


