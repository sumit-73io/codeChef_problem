//minimum car required
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int res = n/4;
        if(n%4==0)
        cout <<res<<endl;
        else
        cout <<res+1<<endl;
    }
    return 0;
}