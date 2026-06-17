#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    if (r - l < 2) {
        cout << -1;
        return 0;
    }

    if (l % 2 == 0) {
        cout << l << " " << l + 1 << " " << l + 2;
    } else {
        if (l + 3 <= r) {
            cout << l + 1 << " " << l + 2 << " " << l + 3;
        } else {
            cout << -1;
        }
    }

    return 0;
}