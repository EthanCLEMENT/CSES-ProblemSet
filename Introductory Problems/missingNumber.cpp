#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;  
    
    vector<int> number_list;
    int missing_number = 0;

    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        number_list.push_back(num);
    }

    if (number_list.size() == 1) {
        if (number_list[0] == 2) {
            cout << 1 << endl; 
        } else {
            cout << 2 << endl; 
        }
        return 0;
    }

    sort(number_list.begin(), number_list.end());

    for (size_t i = 0; i < number_list.size() - 1; i++) {
        if (number_list[i + 1] - number_list[i] != 1) {
            missing_number = number_list[i] + 1;
            break;
        }
    }

    if (missing_number == 0) {
        missing_number = n;
    }

    cout << missing_number << endl;  
    return 0;
}
