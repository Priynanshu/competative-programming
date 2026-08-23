#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int pos = -1;

    // Jahan sequence decrease ho rahi hai, wo point find karo
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            if (pos != -1) {
                // Ek se zyada decreasing points hain
                cout << -1 << endl;
                return 0;
            }

            pos = i;
        }
    }

    // Already sorted
    if (pos == -1) {
        cout << 0 << endl;
        return 0;
    }

    // Last element ko first par shift karne ke baad
    // last element <= first element hona chahiye
    if (a[n - 1] > a[0]) {
        cout << -1 << endl;
        return 0;
    }

    cout << n - pos - 1 << endl;

    return 0;
}