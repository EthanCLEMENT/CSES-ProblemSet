#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int main(){
    int n,ans=1;
    cin >> n;
    vector<int>v;
    for(int i=0;i<n-1;i++){
	int x;
	cin >> x;
	v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<v.size();j++){
	if(v[j]==ans){
	    ans++;
	}
	else{
	    cout << ans << endl;
	    return 0;
	}
    }
    cout << ans << endl;
}
