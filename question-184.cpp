#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> dirty(m);

    for (int i = 0; i < m; i++) {
        cin >> dirty[i];
    }

    sort(dirty.begin(), dirty.end());

    if (m > 0 && (dirty[0] == 1 || dirty[m - 1] == n)) {
        cout << "NO" << endl;
        return 0;
    }

    // 3 consecutive dirty stairs
    for (int i = 0; i + 2 < m; i++) {
        if (dirty[i + 1] == dirty[i] + 1 &&
            dirty[i + 2] == dirty[i] + 2) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}