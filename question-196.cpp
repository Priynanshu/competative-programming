#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> zero;
    int ans = 0;

    int counter = 1;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if(b > 0) {
            ans += a;
            counter += b - 1;
        }
        else {
            zero.push_back(a);
        }
    }

    sort(zero.rbegin(), zero.rend());

    int take = min(counter, (int)zero.size());

    for(int i = 0; i < take; i++) {
        ans += zero[i];
    }

    cout << ans << endl;

    return 0;
}