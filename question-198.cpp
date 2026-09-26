#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    cin >> p;

    const int MOD = 1000003;
    long long ans = 0;

    for (char ch : p) {
        int code;

        if (ch == '>') code = 8;       // 1000
        else if (ch == '<') code = 9;  // 1001
        else if (ch == '+') code = 10; // 1010
        else if (ch == '-') code = 11; // 1011
        else if (ch == '.') code = 12; // 1100
        else if (ch == ',') code = 13; // 1101
        else if (ch == '[') code = 14; // 1110
        else code = 15;                // ]

        ans = (ans * 16 + code) % MOD;
    }

    cout << ans << endl;

    return 0;
}