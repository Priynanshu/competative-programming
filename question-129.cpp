#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long L = -2000000000LL;
    long long R = 2000000000LL;

    while (n--) {
        string sign;
        long long x;
        char ans;

        cin >> sign >> x >> ans;

        if (sign == ">") {
            if (ans == 'Y')
                L = max(L, x + 1);
            else
                R = min(R, x);
        }
        else if (sign == "<") {
            if (ans == 'Y')
                R = min(R, x - 1);
            else
                L = max(L, x);
        }
        else if (sign == ">=") {
            if (ans == 'Y')
                L = max(L, x);
            else
                R = min(R, x - 1);
        }
        else if (sign == "<=") {
            if (ans == 'Y')
                R = min(R, x);
            else
                L = max(L, x + 1);
        }
    }

    if (L > R)
        cout << "Impossible";
    else
        cout << L;

    return 0;
}