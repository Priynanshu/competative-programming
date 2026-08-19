#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;

        if (a.size() <= b.size()) {
            mp[a] = a;
        } else {
            mp[a] = b;
        }
    }

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        cout << mp[word] << " ";
    }

    return 0;
}