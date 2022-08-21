#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int div(int x){
    int ans=0;
    for(int j=1;j<=sqrt(x);j++){
	if(x%j==0){
	    if(x/j==j){
		ans++;
	    }
	    else{
		ans+=2;
	    }
	}
    }
    cout << ans << endl;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
	int x;
	cin >> x;
	div(x);
    }
    return 0;
}
