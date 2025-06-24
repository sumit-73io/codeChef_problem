/*
Pass or Fail

Chef is struggling to pass a certain college course.

The test has a total of N questions, each question carries 3 marks for a correct answer and -1 for an incorrect answer. Chef is a risk-
averse person so he decided to attempt all the questions. It is known that Chef got X questions correct and the rest of them
incorrect. For Chef to pass the course he must score at least P marks.

Will Chef be able to pass the exam or not?

Input Format

. First line will contain T, number of testcases. Then the testcases follow.
. Each testcase contains of a single line of input, three integers N, X, P.

Output Format

For each test case output "PASS" if Chef passes the exam and "FAIL" if Chef fails the exam.

You may print each character of the string in uppercase or lowercase (for example, the strings "pASs", "pass", "Pass" and "PASS" will
all be treated as identical).

Constraints

. 1< T ≤ 1000
. 1<N <100
. 0<X<N
. 0<P<3.N
*/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p,totalMarks,cMarks,negativeMarks;
        cin>>n>>x>>p;
        totalMarks = (x*3) - (n-x);
        if(totalMarks >= p)
        cout<<"Pass"<<endl;
        else
        cout<<"Fail"<<endl;

    }
    return 0;
}