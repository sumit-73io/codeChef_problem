#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
        int y = n-x;
	    if(x>y)
	    cout<<y<<endl;
	    else if(x==y)
	    cout<<0<<endl;
	    else
	    cout<<x<<endl;
	}
    return 0;
}
