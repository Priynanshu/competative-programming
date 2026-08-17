#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double first = a[0];
    double last = l - a[n - 1];

    int maxDiff = 0;

    for (int i = 0; i < n - 1; i++) {
        int diff = a[i + 1] - a[i];
        maxDiff = max(maxDiff, diff);
    }

    double ans = max({
        first,
        last,
        maxDiff / 2.0
    });

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}