#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long

int main(){
    int n, ans = 0, m = 5;
    cin >> n;
    while(n / m > 0){
        ans += n / m;
        m *= 5;
    }
    cout << ans << endl;
}