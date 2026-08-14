#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long ans = 0;
    int cur = 1;

    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;

        if (target >= cur) {
            ans += target - cur;
        } else {
            ans += n - cur + target;
        }

        cur = target;
    }

    cout << ans << endl;

    return 0;
}