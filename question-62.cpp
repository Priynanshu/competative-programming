#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> home(n), guest(n);

    for(int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    // guest color ka frequency map
    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[guest[i]]++;
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        count += freq[home[i]];
    }

    cout << count << endl;

    return 0;
}