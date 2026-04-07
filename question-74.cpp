#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    bool right = true;

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            // full row
            for(int j = 1; j <= m; j++) {
                cout << "#";
            }
        } else {
            if(right) {
                // right side #
                for(int j = 1; j < m; j++) cout << ".";
                cout << "#";
                right = false;
            } else {
                // left side #
                cout << "#";
                for(int j = 1; j < m; j++) cout << ".";
                right = true;
            }
        }
        cout << endl;
    }

    return 0;
}