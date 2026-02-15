#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;

        string s = to_string(n);
        int d = s.length();               
        int first_digit = s[0] - '0';     

        long long ans = 9 * (d - 1) + first_digit;

        long long repeated = 0;
        for(int i = 0; i < d; i++) {
            repeated = repeated * 10 + first_digit;
        }

        if(repeated > n) {
            ans--;
        }

        cout << ans << "\n";
    }

    return 0;
}
