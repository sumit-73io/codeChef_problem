/*
Sale Season
It's the sale season again and Chef bought items worth a total of X
X rupees. The sale season offer is as follows:
*/

#include<iostream>
using namespace std;
int main(){
    int x ,t;
    cin >> t;
    while(t--){
        cin >> x;
        if(x > 100 && x <=1000){
            cout << x-25 << endl;
        }else if(x > 1000 && x <=5000){
            cout << x-100 << endl;
        }else if (x > 5000){
            cout << x-500 << endl;
        }else cout << x << endl;
    }
    return 0;
}