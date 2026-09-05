#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int left = 0;
    long long sum = 0;
    int ans = 0;

    for(int right = 0; right < n; right++) {
        sum += a[right];

        while(sum > t) {
            sum -= a[left];
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;
}