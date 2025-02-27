#include <iostream>
using namespace std;

int main() {
  int currval = 0, val = 0;

  // Read the first value
  if (cin >> currval) {
    int cnt = 1; // Initialize counter for the current value

    // Read the rest of the values
    while (cin >> val) {
      if (currval == val) {
        // If the current value is the same as the previous one, increment the counter
        ++cnt;
      } else {
        // If the current value is different, print the count of the previous value
        cout << currval << " occurs " << cnt << " times." << endl;
        currval = val; // Update currval to the new value
        cnt = 1; // Reset the counter for the new value
      }
    }
    // Print the count for the last value
    cout << currval << " occurs " << cnt << " times." << endl;
  }

  return 0;
}


