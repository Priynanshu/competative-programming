#include <bits/stdc++.h>
using namespace std;

int main() {
    int v;
    cin >> v;

    vector<int> a(10);

    int minCost = INT_MAX;

    for (int i = 1; i <= 9; i++) {
        cin >> a[i];
        minCost = min(minCost, a[i]);
    }

    if (v < minCost) {
        cout << -1 << endl;
        return 0;
    }

    int len = v / minCost;
    string ans = "";

    for (int i = 0; i < len; i++) {
        for (int digit = 9; digit >= 1; digit--) {

            int remaining = len - i - 1;

            if (v - a[digit] >= remaining * minCost) {
                ans += char('0' + digit);
                v -= a[digit];
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}