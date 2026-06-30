#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int upperSum = 0;
    int lowerSum = 0;
    bool diffParity = false;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        upperSum += x;
        lowerSum += y;

        // if one odd or one even
        if ((x % 2) != (y % 2)) {
            diffParity = true;
        }
    }

    // already both even
    if (upperSum % 2 == 0 && lowerSum % 2 == 0) {
        cout << 0 << endl;
    }
    // both odd finding parity after one rotation
    else if (upperSum % 2 == 1 && lowerSum % 2 == 1 && diffParity) {
        cout << 1 << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}