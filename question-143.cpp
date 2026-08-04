#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> value(8, -1);

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;

        int mask = 0;

        if ((x / 100) % 10) mask |= 4;
        if ((x / 10) % 10)  mask |= 2;
        if (x % 10)         mask |= 1;

        if (value[mask] == -1)
            value[mask] = x;
    }

    vector<int> best;

    for (int s = 0; s < (1 << 8); s++) {

        vector<int> cur;
        bool ok = true;

        for (int i = 0; i < 8; i++) {

            if (!(s & (1 << i))) continue;

            if (value[i] == -1) {
                ok = false;
                break;
            }

            for (int j = 0; j < cur.size(); j++) {

                int otherMask = -1;

                for (int t = 0; t < 8; t++)
                    if (value[t] == cur[j])
                        otherMask = t;

                if ((i & otherMask) != 0) {
                    ok = false;
                    break;
                }
            }

            if (!ok) break;

            cur.push_back(value[i]);
        }

        if (ok && cur.size() > best.size())
            best = cur;
    }

    cout << best.size() << "\n";
    for (int x : best)
        cout << x << " ";
}