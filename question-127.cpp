#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) {
        cout << "NO";
        return 0;
    }

    vector<int> diff;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }

    if (diff.size() != 2) {
        cout << "NO";
        return 0;
    }

    int i = diff[0];
    int j = diff[1];

    if (s1[i] == s2[j] && s1[j] == s2[i]) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}