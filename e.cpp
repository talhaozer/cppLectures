#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream f("test.txt"); // Open the file for reading
    string a;
    vector<string> words; // Vector to hold words
    char letter;

    // Read the letter from user
    cout << "Enter the letter to count: ";
    cin >> letter;

    // Check if the file is opened successfully
    if (!f.is_open()) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    // Read the entire file word by word
    while (f >> a) {
        words.push_back(a); // Push each word to the vector
    }

    int cnt = 0;
    string lastWord;

    // Iterate over each word in the vector
    for (string v : words) {
        // Iterate through each character in the word
        for (int i = 0; i < v.length(); i++) {
            if (v[i] == letter) {
                cnt++; // Count occurrences of the letter
                lastWord = v; // Update the last word containing the letter
            }
        }
    }

    // Output the result
    cout << "The letter '" << letter << "' appears " << cnt << " times." << endl;
    cout << "The last word containing the letter is: " << lastWord << endl;

    return 0;
}
