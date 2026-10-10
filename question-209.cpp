#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (k == n) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> p(n + 1, 0);

    // Exactly k good elements create karo
    for (int i = 2; i <= k + 1; i++) {
        p[i] = i;
    }

    // Remaining positions aur values ko cycle mein arrange karo
    vector<int> rem;
    rem.push_back(1);

    for (int i = k + 2; i <= n; i++) {
        rem.push_back(i);
    }

    for (int i = 0; i < rem.size(); i++) {
        p[rem[i]] = rem[(i + 1) % rem.size()];
    }

    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    return 0;
}