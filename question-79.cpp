#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n >> v;

    vector<int> res;

    for(int i = 1; i <= n; i++) {
        int k;
        cin >> k;

        bool ok = false;

        for(int j = 0; j < k; j++) {
            int x;
            cin >> x;

            if(x < v) {
                ok = true;
            }
        }

        if(ok) {
            res.push_back(i);
        }
    }

    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    return 0;
}