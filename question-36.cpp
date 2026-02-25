#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long a, b;
        cin >> a >> b;

        long long ans = 1e18;

        for(int i = 0; i <= 30; i++) {

            long long new_b = b + i;

            if(new_b == 1) continue;

            long long temp_a = a;
            long long cnt = i;

            while(temp_a > 0) {
                temp_a /= new_b;
                cnt++;
            }

            ans = min(ans, cnt);
        }

        cout << ans << endl;
    }
}