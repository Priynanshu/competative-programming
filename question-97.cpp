#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> marks(n);

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    vector<bool> successful(n, false);

    // Har subject ke liye
    for (int subject = 0; subject < m; subject++) {

        char mx = '0';

        // Maximum mark find karo
        for (int student = 0; student < n; student++) {
            mx = max(mx, marks[student][subject]);
        }

        // Jitne students ke marks maximum hain unhe successful mark karo
        for (int student = 0; student < n; student++) {
            if (marks[student][subject] == mx) {
                successful[student] = true;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (successful[i]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}