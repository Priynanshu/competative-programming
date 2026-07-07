#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string team;
        cin >> team;
        mp[team]++;
    }

    int maxCount = 0;
    string result = "";

    for (auto it : mp) {
        int freq = it.second;

        if (maxCount < freq) {
            maxCount = freq;
            result = it.first;
        }
    }

    cout << result << endl;

    return 0;
}