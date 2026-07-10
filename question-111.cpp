#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> freq(10, 0);

    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;

        for (char ch : s) {
            if (ch != '.') {
                freq[ch - '0']++;
            }
        }
    }

    for (int i = 1; i <= 9; i++) {
        if (freq[i] > 2 * k) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}