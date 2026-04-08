#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        int sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if(sum % 2 == 1) {
            cout << "YES" << endl;
        } 
        else if((n * k) % 2 == 0) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}