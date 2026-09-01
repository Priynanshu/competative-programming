#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        freq[x[i]]++;
    }

    for (int i = 0; i < n; i++) {
        int home = n - 1;
        int extraHome = freq[y[i]];
        home += extraHome;

        int away = (n - 1) - extraHome;

        cout << home << " " << away << '\n';
    }

    return 0;
}