#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> len(4);

    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;
        len[i] = s.size() - 2;   // "A.", "B.", etc. ko ignore karo
    }

    vector<bool> great(4, false);

    for (int i = 0; i < 4; i++) {
        bool small = true;
        bool large = true;

        for (int j = 0; j < 4; j++) {
            if (i == j) continue;

            if (len[i] * 2 > len[j])
                small = false;

            if (len[i] < 2 * len[j])
                large = false;
        }

        if (small || large)
            great[i] = true;
    }

    int cnt = 0;
    int idx = -1;

    for (int i = 0; i < 4; i++) {
        if (great[i]) {
            cnt++;
            idx = i;
        }
    }

    if (cnt != 1)
        cout << "C\n";
    else
        cout << char('A' + idx) << "\n";

    return 0;
}