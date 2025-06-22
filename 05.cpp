/*
Each pizza consists of 4 slices. There are N friends and each friend needs exactly 
X slices.
Find the minimum number of pizzas they should order to satisfy their appetite.
*/

#include<iostream>
using namespace std;
int main(){
    int x,n, t;
    cin >> t;
    while (t--){
        cin >> n >> x;
        int res = (n*x)/4;
        if((n*x) % 4 == 0){
            cout << res <<endl;
        }else {
            cout << res+1 << endl;
        }
    }
    return 0;
}