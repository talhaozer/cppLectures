#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <string>
using namespace std;

vector<vector<string>> groupWordsByFirstChar(const vector<string> words) {
    unordered_map<char,vector<string>> groppedwordbyfirstchar;


    for(const string wordss : words){

        char firstchar = wordss[0];
        groppedwordbyfirstchar[firstchar].push_back(wordss);
    }


    vector <vector<string>> result;
    for(const auto pair : groppedwordbyfirstchar){
        result.push_back(pair.second);
    }
    return result;
    
        
   
}

int main(){
    
    string a;
    vector <string> filewords; 
    ifstream f("test.txt"); 



    while(f>>a){
        filewords.push_back(a);

    }


    

    vector<vector<string>> groups =groupWordsByFirstChar(filewords);
    for (const auto group : groups){
        for(const string word : group){
            cout << word << " ";
        }
        cout << endl;
    }
    



    return 0;
}
   

    







