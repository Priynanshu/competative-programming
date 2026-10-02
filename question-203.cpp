#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, m;
    cin >> n >> m;

    map<char, int> available;
    map<char, int> required;

    // Frequency of available sheets
    for (int i = 0; i < n.size(); i++) {
        available[n[i]]++;
    }

    // Frequency of required pieces
    for (int i = 0; i < m.size(); i++) {
        required[m[i]]++;
    }

    int ans = 0;

    // Check every required color
    for (auto it : required) {
        char ch = it.first;
        int need = it.second;

        if (available[ch] == 0) {
            cout << -1 << endl;
            return 0;
        }

        ans += min(available[ch], need);
    }

    cout << ans << endl;

    return 0;
}