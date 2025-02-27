#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <string>
using namespace std;

class Animal{
    public:

    void sound(){
        cout << "Animal makes a sound" << endl;
    }
    
};


class dog : public Animal{

    public:
    void sound(){
        cout << "Dog barks" << endl;
    }

};

int main(){
    Animal a;
    a.sound();
    dog d;
    d.sound();
    return 0;
}
















