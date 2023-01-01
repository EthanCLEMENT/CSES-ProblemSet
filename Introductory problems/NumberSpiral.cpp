#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long

int main(){
   ll t, x, y, len;
   cin >> t;
   for(int i = 0; i < t; i++){
      cin >> x >> y;
      len = max(x,y) - 1;
      if(len % 2 != 0){
         if(x < y){
            cout << len * len + x << endl;
         }else{
            cout << len * len + 2 * len - y + 2 << endl;
         }
      }else{
         if(x < y){
            cout << len * len + 2 * len - x + 2 << endl;
         }else{
            cout << len * len + y << endl;
         }
      }
   }
}
