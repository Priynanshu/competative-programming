#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool good(ll x) {
    set<int> st;

    while (x > 0) {
        st.insert(x % 10);
        x /= 10;
    }

    return st.size() <= 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> candidates;

    // Generate all good numbers up to 100000
    // (Enough for this problem)
    for (int i = 2; i <= 100000; i++) {
        if (good(i))
            candidates.push_back(i);
    }

    int t;
    cin >> t;

    while (t--) {
        ll x;
        cin >> x;

        for (int y : candidates) {
            if (good(x * 1LL * y)) {
                cout << y << '\n';
                break;
            }
        }
    }

    return 0;
}