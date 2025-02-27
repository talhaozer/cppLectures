#include <iostream>
#include <fstream>
using namespace std;

int main() {


    ofstream f("a.txt");

    f << "Hello World" << endl;

    f.close();



}


