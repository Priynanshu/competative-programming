#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, n;
    cin >> x >> y;
    cin >> n;

    const long long MOD = 1000000007;

    long long a[6];

    a[0] = x;
    a[1] = y;
    a[2] = y - x;
    a[3] = -x;
    a[4] = -y;
    a[5] = x - y;

    long long ans = a[(n - 1) % 6];

    ans = (ans % MOD + MOD) % MOD;

    cout << ans << endl;

    return 0;
}