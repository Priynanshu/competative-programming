#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {0};

    for (char c : s) {
        freq[c - 'a']++;
    }

    int odd = 0;

    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            odd++;
        }
    }

    if (odd <= 1) {
        cout << "First" << endl;
    }
    else if (odd % 2 == 0) {
        cout << "Second" << endl;
    }
    else {
        cout << "First" << endl;
    }

    return 0;
}