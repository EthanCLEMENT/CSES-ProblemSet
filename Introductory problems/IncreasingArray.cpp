#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long

int main(){
    ll n, ans = 0;
    vector<int>v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int j = 1; j < v.size(); j++){
        if(v[j] < v[j - 1]){
            ans += (v[j - 1] - v[j]);
            v[j] = v[j - 1];
        }
    }
    cout << ans << endl;

}