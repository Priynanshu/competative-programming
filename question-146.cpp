#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int even_a1 = 0, odd_a1 = 0;
    int even_b1 = 0, odd_b1 = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            if (a[i] == '1') even_a1++;
            if (b[i] == '1') even_b1++;
        } else {
            if (a[i] == '1') odd_a1++;
            if (b[i] == '1') odd_b1++;
        }
    }

    if (even_a1 == even_b1 && odd_a1 == odd_b1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}