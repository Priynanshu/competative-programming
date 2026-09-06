#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    vector<pair<int, int>> z(p);
    vector<pair<int, int>> x(q);

    for(int i = 0; i < p; i++) {
        cin >> z[i].first >> z[i].second;
    }

    for(int i = 0; i < q; i++) {
        cin >> x[i].first >> x[i].second;
    }

    int ans = 0;

    for(int t = l; t <= r; t++) {

        bool possible = false;

        for(int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {

                int startX = x[j].first + t;
                int endX = x[j].second + t;

                // Check overlap
                if(max(z[i].first, startX) <= min(z[i].second, endX)) {
                    possible = true;
                    break;
                }
            }

            if(possible) {
                break;
            }
        }

        if(possible) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}