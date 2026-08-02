#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i += 2) {
        if (s[i] == 'L' && s[i + 1] == 'R')
            cout << i + 1 << " " << i + 2 << "\n";
        else
            cout << i + 2 << " " << i + 1 << "\n";
    }

    return 0;
}