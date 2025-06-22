#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,rests;
	    cin>>x>>y>>z;
	    int time_1 = x*y, time_2;
	    if(x%3==0){
	        rests = (x/3)-1;
	    }else{
	        rests = x/3;
	    }
	    time_2= z*rests;
        cout<<time_1+time_2<<endl;
	    
	}
    return 0;

}
