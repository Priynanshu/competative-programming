#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> k(n);

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < k[i]; j++) {
            int items;
            cin >> items;
            sum += items * 5;
        }

        sum += k[i] * 15;

        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}