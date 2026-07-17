#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pivot = s.find('^');

    long long left = 0, right = 0;

    for (int i = 0; i < pivot; i++) {
        if (isdigit(s[i])) {
            left += 1LL * (s[i] - '0') * (pivot - i);
        }
    }

    for (int i = pivot + 1; i < s.size(); i++) {
        if (isdigit(s[i])) {
            right += 1LL * (s[i] - '0') * (i - pivot);
        }
    }

    if (left == right)
        cout << "balance";
    else if (left > right)
        cout << "left";
    else
        cout << "right";

    return 0;
}