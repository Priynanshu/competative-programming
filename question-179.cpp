#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // s ki length t se chhoti hai
    if (s.size() < t.size()) {
        cout << "need tree";
        return 0;
    }

    unordered_map<char, int> mpS, mpT;

    // Frequency count
    for (char c : s) {
         mpS[c]++;
    }

    for (char c : t) {
         mpT[c]++;
    }

    // Check: t ke characters s mein available hain ya nahi
    for (auto [ch, freq] : mpT) {
        if (mpS[ch] < freq) {
            cout << "need tree";
            return 0;
        }
    }

    // Same length -> only swapping required
    if (s.size() == t.size()) {
        cout << "array";
        return 0;
    }

    // Check if t is a subsequence of s
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        if (j < t.size() && s[i] == t[j]) {
            j++;
        }
    }

    if (j == t.size())
        cout << "automaton";
    else
        cout << "both";

    return 0;
}