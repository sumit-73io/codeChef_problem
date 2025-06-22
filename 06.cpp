// reverse the number.
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int num,res, rem;
        cin >>num;
        for (res = 0; num ;num/=10){
            rem = num%10;
            res = (res*10) +rem;
        }
        cout << res<<endl;
    }
    return 0;
}