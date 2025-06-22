// katapa from bahubali

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int odd=0, even=0;
    cin >>n;
    vector<int>wpns(n);
    for (int i = 0; i < n; i++){
        cin >> wpns[i];
        if (wpns[i]%2==0){
            even++;
        }else odd++;
    }
    if (even > odd){
        cout << "READY FOR BATTLE" << endl;
    }else cout << "NOT READY" << endl;
    
    return 0;
}