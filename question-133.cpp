#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int firstR = -1, lastR = -1;
    int firstL = -1, lastL = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            if (firstR == -1)
                firstR = i;
            lastR = i;
        }

        if (s[i] == 'L') {
            if (firstL == -1)
                firstL = i;
            lastL = i;
        }
    }

    if (firstR == -1) {
        // Only L exists
        cout << lastL + 1 << " " << firstL;
    }
    else if (firstL == -1) {
        // Only R exists
        cout << firstR + 1 << " " << lastR + 2;
    }
    else {
        // Both R and L exist
        cout << firstR + 1 << " " << firstL;
    }

    return 0;
}