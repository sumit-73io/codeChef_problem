/*
Reach fast

Chef is standing at coordinate A while Chefina is standing at coordinate B.

In one step, Chef can increase or decrease his coordinate by at most K.

Determine the minimum number of steps required by Chef to reach Chefina.

Input Format

· The first line of input will contain a single integer T, denoting the number of test cases.
. Each test case consists of three integers A, B, and K, the initial coordinate of Chef, the initial
coordinate of Chefina and the maximum number of coordinates Chef can move in one step.

Output Format

For each test case, output the minimum number of steps required by Chef to reach Chefina.

Constraints

· 1≤ T ≤ 1000
. 1 < A, B ≤ 100
. 1< K≤ 100
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,k,dis,res;
	    cin>>a>>b>>k;
	    dis = abs(b-a);
	    if(a==b)
	    res = 0;
	    else {
	        if(dis%k==0)
	        res = dis/k;
	        else
	        res = (dis/k)+1;
	    }
	    cout<<res<<endl;
	}
	return 0;

}

