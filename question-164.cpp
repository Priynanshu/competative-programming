#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> army(m + 1);

    for (int i = 0; i <= m; i++) {
        cin >> army[i];
    }

    int fedor = army[m];

    int ans = 0;

    for (int i = 0; i < m; i++) {
        int diff = army[i] ^ fedor;

        int bits = __builtin_popcount(diff);

        if (bits <= k) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}