//prime number
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool isPrime=true;
        cin >> n;
        if(n<=1)
        isPrime=false;
        else{
            for (int i = 2; i < n; i++){
                if(n%i==0){
                    isPrime=false;
                    break;

                }
            }
        }
        if (isPrime)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}