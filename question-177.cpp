#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long ans = h[0] + 1; // Tree 1 tak jana + nut khana

    for (int i = 1; i < n; i++) {
        ans += abs(h[i] - h[i - 1]); // height adjustment
        ans += 1;                    // next tree par jump
        ans += 1;                    // nut khana
    }

    cout << ans << endl;

    return 0;
}