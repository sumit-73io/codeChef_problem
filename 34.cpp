/*
Single-use Attack

Chef is playing a video game, and is now fighting the final boss.

The boss has H health points. Each attack of Chef reduces the health of the boss by X.
Chef also has a special attack that can be used at most once, and will decrease the health of the boss
by Y.

Chef wins when the health of the boss is < 0.
What is the minimum number of attacks needed by Chef to win?

Input Format
· The first line of input will contain a single integer T, denoting the number of test cases.
. The first and only line of each test case will contain three space-separated integers H, X, Y - the
parameters described in the statement.

Output Format

For each test case, output on a new line the minimum number of attacks needed by Chef to win.

Constraints

· 1≤ T ≤ 1000
. 1<X <Y <H≤100
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y,rslt=0;
	    cin>>h>>x>>y; 
	    if(h>0){
            h = h-y;
            rslt =1;
	        if(h%x==0)
	        rslt += (h/x);
            else
            rslt += (h/x)+1;
	        
            cout<<rslt<<endl;
	    }else cout<<0<<endl;
	    
	}
	return 0;

}
