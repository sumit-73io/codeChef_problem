#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--){
	    int n, count = 0;
	    cin >> n;
	    int d[n];
        for(int i = 0; i < n; i++){
            cin >> d[i];
        }
	    for(int i = 0; i < n; i++){
	        if(d[i] >= 1000)
	        count++;
	    }
        cout << count << endl;
	}

}
