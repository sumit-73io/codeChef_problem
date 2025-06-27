/*
Minimum number of Flips

Chef has an array A of length N consisting of 1 and -1 only.

In one operation, Chef can choose any index i (1 < i < N) and multiply the element A¿ by -1.

Find the minimum number of operations required to make the sum of the array equal to 0. Output -1
if the sum of the array cannot be made 0.

Input Format

. First line will contain T, number of test cases. Then the test cases follow.
. First line of each test case consists of a single integer N denoting the length of the array.
. Second line of each test case contains N space-separated integers A1, A2, ... , AN denoting the
array A.

Output Format

For each test case, output the minimum number of operations to make the sum of the array equal to 0.
Output -1 if it is not possible to make the sum equal to 0.

Constraints

. 1≤ T ≤ 100
. 2 < N ≤ 1000
. Ai=1 or Ai =- 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, pos_no=0, neg_no=0;
	    cin>>n;
	    int arr[n];
	    for(int i =0; i<n; i++){
	        cin>>arr[i];
	        if(arr[i]>0)
	        pos_no++;
	        else
	        neg_no++;
	    }
        if((pos_no+neg_no)%2==0){
            cout<<abs((pos_no/2) - (neg_no/2))<<endl;
        }
        else cout<<-1<<endl;
	}
    
    return 0;
}
