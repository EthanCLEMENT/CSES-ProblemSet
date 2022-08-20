#include <iostream>
#include <set> 
using namespace std;

int main(){
    int n;
    set<int>p;
    cin >> n;
    for(int i = 0; i < n; i++){
    	int x;
	cin >> x;
	p.insert(x);
    }
    cout << p.size() << endl;
}
