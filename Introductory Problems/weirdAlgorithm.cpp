#include <iostream>
#include <vector>

using namespace std;

vector<int> algo(int n) {
    vector<int> values_of_n;
    
    while (n != 1) {
        values_of_n.push_back(n);
        
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
    }
    
    values_of_n.push_back(1); 
    return values_of_n;
}

int main() {
    int n;
    cin >> n;  
    
    vector<int> result = algo(n); 
    
    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i == result.size() - 1 ? "\n" : " ");
    }
    
    return 0;
}
