#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A'|| s[i]== 'a' ){
                cout<<"T";
            }else if(s[i]=='T'|| s[i]=='t')
            cout<<"A";
            else if(s[i]=='G'|| s[i]=='g')
            cout <<"C";
            else cout<<"G";
        }
        cout<<endl;

    }

    return 0;
}