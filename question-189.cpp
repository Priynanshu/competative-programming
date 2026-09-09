#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0;
    int j = 0;
    int ans = 0;

    while (i < n && j < m) {

        if (b[j] >= a[i]) {
            // b[j] ko a[i] banaya ja sakta hai
            i++;
            j++;
        }
        else {
            // b[j] bahut chhota hai, isko skip karo
            j++;
        }
    }

    // Jo required problems match nahi hui,
    // unke liye naye problems banane padenge
    ans = n - i;

    cout << ans << endl;

    return 0;
}