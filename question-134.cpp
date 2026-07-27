#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> present(3002, false);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        present[x] = true;
    }

    for (int i = 1; i <= 3001; i++) {
        if (!present[i]) {
            cout << i;
            return 0;
        }
    }

    return 0;
}