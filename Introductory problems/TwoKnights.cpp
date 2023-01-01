#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long

int main(){
   ll n, ans;
   cin >> n;
   for(int i = 1; i <= n; i++){
        ans = 1 + (i - 1) * (i - 2)/2;
        ans = ans * (i - 1) * (i + 4);
        cout << ans << endl;
   }
}
