#include <iostream>
#include <string>

using namespace std;

int main() {
    int longest_repetition = 1;
    int counter = 1;
    string s;
    cin >> s;  

    if (s.empty()) {
        cout << 0 << endl;
        return 0;
    }

    for (size_t i = 1; i < s.length(); i++) { 
        if (s[i] == s[i - 1]) {
            counter++;
            longest_repetition = max(longest_repetition, counter);
        } else {
            counter = 1; 
        }
    }
    cout << longest_repetition << endl;
    return 0;
}
