#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    long long x,y;
    long long n;
    long long ans = 0;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> x;
        cin >> y;
        n = max(x,y);
        if (n % 2 != 0){
            if (y == n){
                ans = n*n - x + 1;
            }else{
                ans = (n-1)*(n-1)+y;
            }
        }else{
            if(x == n){
                ans = n*n - y +1;
            }
            else{
               ans = (n-1)*(n-1) + x;
            }
        }
        cout << ans << endl;
    }
    
    
    return 0;

}
