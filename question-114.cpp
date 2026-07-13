#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y, k, n;
    cin >> y >> k >> n;

    bool found = false;

    // Pehla multiple of k jo y se bada ho
    long long total = ((y / k) + 1) * k;

    while (total <= n) {
        cout << total - y << " ";
        found = true;
        total += k;
    }

    if (!found)
        cout << -1;

    cout << endl;

    return 0;
}