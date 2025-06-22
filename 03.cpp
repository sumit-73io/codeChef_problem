/*
Water Filling
Chef has three water bottles. At any point, if at least two of them are empty,
she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.
*/

#include<iostream>
using namespace std;
int main(){
    int b1,b2,b3, t;
    cin >> t;
    while (t--){
        cin >> b1 >> b2 >> b3;
        if((b1+b2+b3) <=1){
            cout << "Water filling time" << endl;
        }else cout << "Not now" << endl;
    }
    return 0;
}