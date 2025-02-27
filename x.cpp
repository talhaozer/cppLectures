#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<string>> groupWordsByLength(const vector<string>& words) {
    unordered_map<int, vector<string>> groupedWords;
    unordered_map<char,vector<string>> groppedwordbylastchar;
    unordered_map<char,vector<string>> groppedwordbyfirstchar;  


    for (const string& worddd : words)
    {
        char firstchar = worddd[0];
        groppedwordbyfirstchar[firstchar].push_back(worddd);

    }
    





    
    for(const string& wordd : words){
        int lengthth= wrodd.size();

        char lastchar = wordd[lengthth-1];
        groppedwordbylastchar[lastchar].push_back(wordd);


            }



    for (const stwring& word : words) {
        int length = word.length();
        groupedW    ords[length].push_back(word);//{{3,{bat,cat,dog}}  ,{8,{elephant}}}
    }
    


    // Collect results into a vector of vectors
    vector<vector<string>> result;
    for (const auto& pair : groupedWords) {
        result.push_back(pair.second);//{3,{bat,cat,dog}}
    }

    return result;

}

int main() {
    vector<string> words = {"bat", "cat", "dog", "elephant", "tiger", "ant"};

    vector<vector<string>> grouped = groupWordsByLength(words);

    for (const auto& group : grouped) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
