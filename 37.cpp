/*
Degree of Polynomial
In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic
expression with non-zero coefficient.

Chef has a polynomial in one variable x with N terms. The polynomial looks like Ao . r + A1 . z1 + ... + AN-2.
IN-2 + AN-1 . TN-1 where Ai-1 denotes the coefficient of the ith term ri-1 for all (1 < i ≤ N).

Find the degree of the polynomial.

Note: It is guaranteed that there exists at least one term with non-zero coefficient.

Input Format

. First line will contain T, number of test cases. Then the test cases follow.
· First line of each test case contains of a single integer N - the number of terms in the polynomial.
. Second line of each test case contains of N space-separated integers - the ith integer Ai-1 corresponds to the
coefficient of ri-1.

Output Format

For each test case, output in a single line, the degree of the polynomial.

Constraints

. 1≤ T ≤ 100
. 1≤ N ≤ 1000
. -1000 < Ai ≤ 1000
. Ai#0 for at least one (0< i < N). 

*/

#include<iostream>
using namespace std;

int power(int n, int arr[]){
    int N =n;
    while(n--){
        if(arr[n]==0){
            N--;
        }
        else 
        return N-1;
    }
    return N-1;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        cout << power(n,arr)<<endl;
    }
    return 0;
}