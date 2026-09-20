#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, vector<int>> mp;

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }

    vector<pair<int, int>> ans;

    for(auto it : mp) {
        int x = it.first;
        vector<int> pos = it.second;

        if(pos.size() == 1) {
            ans.push_back({x, 0});
        }
        else {
            int diff = pos[1] - pos[0];
            bool valid = true;

            for(int i = 2; i < pos.size(); i++) {
                if(pos[i] - pos[i - 1] != diff) {
                    valid = false;
                    break;
                }
            }

            if(valid) {
                ans.push_back({x, diff});
            }
        }
    }

    cout << ans.size() << '\n';

    for(auto p : ans) {
        cout << p.first << " " << p.second << '\n';
    }

    return 0;
}