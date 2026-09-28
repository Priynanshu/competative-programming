#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int minVal = INT_MAX;
    int ans = 0;

    for(int i=0; i<k; i++) {
        int sum = 0;

        for(int j=i; j<n; j+=k) {
            sum += a[j];
        }

        if(sum < minVal) {
            minVal = sum;
            ans = i;
        }
    }

    cout << ans + 1 << endl;

    return 0;
}