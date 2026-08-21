#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int last = s[n - 1] - '0';

    int pos = -1;

    // Pehle left se dekho:
    // koi even digit jo last digit se chhota ho.
    // Aisa digit milte hi swap karna best hai.
    for (int i = 0; i < n - 1; i++) {
        int digit = s[i] - '0';

        if (digit % 2 == 0 && digit < last) {
            pos = i;
            break;
        }
    }

    // Agar aisa digit nahi mila,
    // to rightmost even digit choose karo.
    if (pos == -1) {
        for (int i = n - 2; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 0) {
                pos = i;
                break;
            }
        }
    }

    if (pos == -1) {
        cout << -1 << endl;
        return 0;
    }

    swap(s[pos], s[n - 1]);

    cout << s << endl;

    return 0;
}