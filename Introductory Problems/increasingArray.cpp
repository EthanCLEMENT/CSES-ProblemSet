#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    long long changes = 0; 
    vector<int> v;
    cin >> n; 
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x); 
    }

    for (int i = 1; i < v.size(); i++) {
        if (v[i] < v[i - 1]) {
            changes += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << changes << endl;
    return 0;
}
