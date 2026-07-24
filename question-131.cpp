#include <bits/stdc++.h>
using namespace std;

int main() {
    char trump;
    cin >> trump;

    string a, b;
    cin >> a >> b;

    string order = "6789TJQKA";

    char r1 = a[0], s1 = a[1];
    char r2 = b[0], s2 = b[1];

    // Trump beats non-trump
    if (s1 == trump && s2 != trump) {
        cout << "YES";
    }
    // Same suit and higher rank
    else if (s1 == s2 && order.find(r1) > order.find(r2)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}