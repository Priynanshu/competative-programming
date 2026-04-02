#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    // option 1: sab single tickets
    int cost1 = n * a;

    // option 2: mix (jitne full special le sakte ho + remaining single)
    int cost2 = (n / m) * b + (n % m) * a;

    // option 3: sirf special (even extra rides waste ho jaye)
    int cost3 = ((n + m - 1) / m) * b;  // ceil(n/m)

    cout << min({cost1, cost2, cost3}) << endl;

    return 0;
}