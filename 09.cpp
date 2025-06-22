#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin >>n>>x>>y;
	    if((n*x) >=y&&x!=0 && x<=y &&y%x==0 || y ==0)
	    cout << "YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
}
