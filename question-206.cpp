#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {

        int count = 1;

        // Left side
        for(int j = i - 1; j >= 0; j--) {
            if(a[j] <= a[j + 1]) {
                count++;
            }
            else {
                break;
            }
        }

        // Right side
        for(int j = i + 1; j < n; j++) {
            if(a[j] <= a[j - 1]) {
                count++;
            }
            else {
                break;
            }
        }

        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}