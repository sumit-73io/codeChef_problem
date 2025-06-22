#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int ac= a+c,ad=a+d,bc=b+c,bd=b+d;
	    if(ac>=ad &&ac>=bc&&ac>=bd)
	    cout <<ac<<endl;
	    else if(ad>=ac &&ad>=bc&&ad>=bd)
        cout <<ad<<endl;
	    else if(bc>=ac &&bc>=ad&&bc>=bd)
        cout <<bc<<endl;
        else cout <<bd<<endl;
	}

}
