/*
Airlines

An airline operates X aircraft every day. Each aircraft can carry up to 100 passengers.
One day, N passengers would like to travel to the same destination. What is the minimum number of
new planes that the airline must buy to carry all N passengers?

Input Format

. The first line of input will contain a single integer T, denoting the number of test cases.
. Each test case consists of a single line containing two space-separated integers X and N - the
number of aircraft the airline owns and the number of passengers travelling, respectively.

Output Format
. For each test case, output the minimum number of planes the airline needs to purchase.

Constraints

· 1≤ T ≤ 1000
. 1≤ X ≤ 106
. 1≤ N ≤ 106
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,n,req;
	    cin>>x>>n;
	    req = n-(x*100);
	    if(req<=0)
	    cout<<0<<endl;
	    else if(req%100==0)
	    cout << req/100<<endl;
	    else
	    cout<<(req/100)+1<<endl;
	    
	}
	return  0;

}


