#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long

int main(){
    string str;
    int mx = 1, ans = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i]==str[i+1]){
            mx++;
        }
        else{
            if(mx > ans){
                ans = mx;
            }
            mx = 1;
        }
    }
    cout << ans << endl;
}