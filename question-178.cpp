#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> p(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    int count = 0;
    int current = s;

    while (current != t) {
        current = p[current];
        count++;

        // Cycle detect karne ke liye
        if (count > n) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << count << endl;

    return 0;
}