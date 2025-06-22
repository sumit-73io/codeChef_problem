#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int>& result, int x) {
    int carry = 0;
    for (int& digit : result) {
        int prod = digit * x + carry;
        digit = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result = {1};

    for (int i = 2; i <= n; i++)
        multiply(result, i);


    for (auto it = result.rbegin(); it != result.rend(); ++it)
        cout << *it;
    cout << endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        factorial(n);
    }
    
    return 0;
}
