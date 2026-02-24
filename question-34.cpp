#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        long long totalTwos = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];

            while(a[i] % 2 == 0) {
                a[i] /= 2;
                totalTwos++;
            }
        }

        sort(a.begin(), a.end());

        long long sum = 0;

        for(int i = 0; i < n-1; i++) {
            sum += a[i];
        }

        sum += a[n-1] * (1LL << totalTwos);

        cout << sum << endl;
    }
}