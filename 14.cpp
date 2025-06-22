#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,res,timee;
        cin>>x>>y>>z;
	    timee = y/x;
	    if(timee >= z)
	    cout << 0 << endl;
	    else{
	        res = z-timee;
	        cout << res <<endl;
	    }
	}

}
