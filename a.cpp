#include <iostream>
#include <vector>
#include <unordered_map>
#include <fstream>

using namespace std;


vector<vector<string>> groupWordsByLength(const vector<string>& words) {

    unordered_map<int, vector<string>> groupwords;  


    for (const string& word : words)
    {
       int length = word.size();
       groupwords[length].push_back(word);

    }

    vector<vector<string>> result;
    for(const auto& pair : groupwords)
    {
        result.push_back(pair.second);
    }
    return result;
}

int main(){
    string a ;
    vector<string> words; // Vector to hold words


    ifstream f("test.txt"); // Open the file for reading

    while (f>>a)
    {
        words.push_back(a);
    }

    vector<vector<string>> grouped = groupWordsByLength(words);

    for(const auto& group : grouped)
    {   
        for(const string& word : group)
        {
            cout << word << " ";
        }
        cout << endl;
    }

    


    
    return 0;
}
   
    