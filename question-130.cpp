#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    for (int x = 0; x <= n; x++) {
        int minSum = 2 * x + 3 * (n - x);
        int maxSum = 2 * x + 5 * (n - x);

        if (k >= minSum && k <= maxSum) {
            cout << x << endl;
            return 0;
        }
    }

    return 0;
}