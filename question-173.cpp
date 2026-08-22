#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    vector<int> w(26);

    for (int i = 0; i < 26; i++) {
        cin >> w[i];
    }

    // Sabse maximum weight wala character
    int mx = 0;

    for (int i = 0; i < 26; i++) {
        mx = max(mx, w[i]);
    }

    // Original string ka contribution
    long long ans = 0;

    for (int i = 0; i < s.size(); i++) {
        int value = w[s[i] - 'a'];
        ans += 1LL * (i + 1) * value;
    }

    // k naye characters add karne ka contribution
    int len = s.size();

    for (int i = 1; i <= k; i++) {
        ans += 1LL * (len + i) * mx;
    }

    cout << ans << endl;

    return 0;
}