#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <cmath> 

using namespace std;

#define ll long long

int main(){
   ll n, ans = 1;
   cin >> n;
   for(int i = 0; i < n; i++){
      ans = 2 * ans % (int(1e9+7));
   }
   cout << ans << endl;
}
