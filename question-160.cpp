#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> x;
    set<int> y;

    for (int i = 0; i < n; i++) {
        int xi, yi;
        cin >> xi >> yi;

        x.insert(xi);
        y.insert(yi);
    }

    cout << min(x.size(), y.size()) << endl;

    return 0;
}