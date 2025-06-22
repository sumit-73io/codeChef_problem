// CRED coin question 


#include<iostream>
using namespace std;
int main(){
    int x ,y ,t;
    cin >> t;
    while(t--){
        cin >>x>>y;
        int res = (x*y)/100;
        cout << res << endl;
    }
    return 0;
}