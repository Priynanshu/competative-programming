#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long ans = 0;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            mn = min(mn, x);
            ans += mn;
        }

        cout << ans << '\n';
    }

    return 0;
}