#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    map<long long, int> freq;
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        freq[b[i]]++;
    }

    vector<long long> U;
    for (auto const& p : freq) {
        U.push_back(p.first);
    }

    if (U[0] != 0) {
        cout << -1 << "\n";
        return;
    }

    map<long long, long long> b_to_a;
    long long prev_v = 0; 

    int k = U.size();
    for (int i = 0; i < k - 1; ++i) {
        long long current_b = U[i];
        long long next_b = U[i + 1];
        long long cnt = freq[current_b];

        long long diff = next_b - current_b;

        if (diff <= 0 || diff % cnt != 0) {
            cout << -1 << "\n";
            return;
        }

        long long v = diff / cnt;

        if (v <= prev_v) {
            cout << -1 << "\n";
            return;
        }

        b_to_a[current_b] = v;
        prev_v = v;
    }

    long long last_b = U[k - 1];
    if (k == 1) {
        b_to_a[last_b] = 1;
    } else {
        b_to_a[last_b] = prev_v + 1;
    }

    for (int i = 0; i < n; ++i) {
        cout << b_to_a[b[i]] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}