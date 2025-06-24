/*
Second Largest

Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains
three integers A, B and C.

Output Format
For each test case, display the second largest among A, B and C, in a new line.

Constraints

. 1 ≤ T ≤ 1000
· 1 ≤ A,B,C ≤ 1000000

*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && b>c) || (c>b && b>a))
        cout<<b<<endl;
        else if((a>c && c>b) || (b>c && c>a))
        cout <<c<<endl;
        else
        cout<<a<<endl;
        
    }
    return 0;
}