#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

#define ll long long
#define size 26

int main(){
    int isPal = 0;
    string s, ans;
    vector<int>freq(size);
    cin >> s;
    for(char i : s){
        freq[i - 'A']++;
    }
    for(int i = 0; i < size; i++){
        isPal += freq[i] % 2;
    }
    if(isPal > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    for (int i = 0; i < size; i++){
        if(!(freq[i] % 2)){
            for(int j = 0; j < freq[i]/2; j++){
                ans.push_back(i + 'A');
            }
        }
    }
    for (int i = 0; i < size; i++){
        if(freq[i] % 2){
            for(int j = 0; j < freq[i]; j++){
                ans.push_back(i + 'A');
            }
        }
    }
    for (int i = size - 1; i >= 0; i--){
        if(!(freq[i] % 2)){
            for(int j = 0; j < freq[i]/2; j++){
                ans.push_back(i + 'A');
            }
        }
    }
    cout << ans << endl;
}