#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int T0 = 0, T1 = 0;
    for (char c : s) {
        if (c == '0') T0++;
        else T1++;
    }

    int m = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            m++;
        }
    }

    char first_char = s[0];
    int diff = T0 - T1;
    int max_K = -1;

    if (abs(diff) <= 1) {
        int K = (m / 2) * 2;
        if (K >= 2) {
            max_K = max(max_K, K);
        }
    }

    if (diff >= 0 && diff <= 2) {
        int K = -1;
        if (first_char == '0') {
            K = (m % 2 == 1) ? m : m - 1;
        } else {
            K = (m % 2 == 0) ? m - 1 : m - 2;
        }
        if (K >= 1) {
            max_K = max(max_K, K);
        }
    }

    if (diff >= -2 && diff <= 0) {
        int K = -1;
        if (first_char == '1') {
            K = (m % 2 == 1) ? m : m - 1;
        } else {
            K = (m % 2 == 0) ? m - 1 : m - 2;
        }
        if (K >= 1) {
            max_K = max(max_K, K);
        }
    }

    if (max_K == -1) {
        cout << -1 << "\n";
    } else {
        cout << n - max_K << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}