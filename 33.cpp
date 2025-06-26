/*
Dracula Eats

Eat, drink, and be scary

There are N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve
on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next N days
(including today) before Halloween.

Note that Dracula follows the standard 7-day calendar, with Tuesday immediately following Monday.

Input Format

. The first line of input will contain a single integer T, denoting the number of test cases.
. The only line of each test case contains a single integer N, denoting the number of spooky days.

Output Format

For each test case, output on a new line the number of times Dracula would have had his favorite meal after N days.

Constraints

. 1≤ T ≤ 1000
. 1≤ N ≤ 1000
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,fav = 0;
	    cin>>n;
	    
	    if(n == 1){
	        fav = 0;
        }
        // else if(n==2)
        // fav = 1;
        else {
            for(int i = 1; i<n; i+=7){
                fav++;
            }
        }
	    cout<<fav<<endl;
    
	}
    return 0;

}
