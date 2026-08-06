#include <iostream>
#include <vector>
#include <algorithm>
//D
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++) {
        if (abs(a[i - 1] % 2) == abs(a[i + 1] % 2)) {
            long long candidate = a[i - 1] - a[i] + a[i + 1];
            if (candidate < a[i]) {
                a[i] = candidate;
                int j = i;
                while (j > 1 && abs(a[j - 2] % 2) == abs(a[j] % 2)) {
                    long long prev_candidate = a[j - 2] - a[j - 1] + a[j];
                    if (prev_candidate < a[j - 1]) {
                        a[j - 1] = prev_candidate;
                        j--;
                    } else {
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
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