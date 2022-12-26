#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    else if(n <= 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }else{
        for(int i = 2; i < n + 1; i+=2){
            cout << i << " " ;
        }
        for(int j = 1; j < n + 1; j+=2){
            cout << j << " " ;
        }
    }

}