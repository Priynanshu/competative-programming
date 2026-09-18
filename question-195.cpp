#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A = 0, G = 0;
    string ans = "";

    for(int i = 0; i < n; i++) {
        int a, g;
        cin >> a >> g;

        if(abs((A + a) - G) <= 500) {
            A += a;
            ans += 'A';
        }
        else if(abs(A - (G + g)) <= 500) {
            G += g;
            ans += 'G';
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;

    return 0;
}