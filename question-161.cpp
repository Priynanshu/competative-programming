#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l[101], r[101];

    for (int i = 1; i <= n; i++) {
        cin >> l[i] >> r[i];
    }

    bool covered[101] = {};

    // Other students ke segments mark karo
    for (int i = 2; i <= n; i++) {
        for (int x = l[i]; x < r[i]; x++) {
            covered[x] = true;
        }
    }

    int ans = 0;

    // Alexey ke segment me safe length count karo
    for (int x = l[1]; x < r[1]; x++) {
        if (!covered[x]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}