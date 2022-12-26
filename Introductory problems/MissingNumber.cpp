#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define ll long long

int main(){
    int n, ans = 1;
    vector<int>v;
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        int m;
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for(int j = 0; j < v.size(); j++){
        if(v[j] == ans){
            ans++;
        }else{
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans << endl;
}