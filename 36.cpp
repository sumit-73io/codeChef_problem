/*

*/
#include <bits/stdc++.h>
using namespace std;

int greaterTwo(int a, int b, int c){
    int sum;
    if(a>=b){
        if(b>=c){
            sum = a+b;
        }else{
            sum = a+c;
        }
    }
    else if(a>=c){
        sum = a+b;
    }else{
        sum = b+c;
    }
    return sum;
    
}


int main()
{
    int t;
    cin >> t;
    while (t--){
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int aliceTotal = greaterTwo(a1,a2,a3);
        int bobTotal = greaterTwo(b1,b2,b3);
        if(bobTotal>aliceTotal){
            cout<<"Bob"<<endl;
        }
        else if (bobTotal==aliceTotal){
            cout<<"Tie"<<endl;
        }
        else cout<<"Alice"<<endl;

    }
    return 0;
}
