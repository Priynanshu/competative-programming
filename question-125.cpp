#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int one = 0, minusOne = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1)
            one++;
        else
            minusOne++;
    }

    int mx = 2 * min(one, minusOne);

    while (m--) {
        int l, r;
        cin >> l >> r;

        int len = r - l + 1;

        if (len % 2 == 0 && len <= mx)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}