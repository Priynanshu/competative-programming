#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<string> grid(r);

    for(int i = 0; i < r; i++) {
        cin >> grid[i];
    }

    vector<bool> rowSafe(r, true);
    vector<bool> colSafe(c, true);

    // Step 1: mark unsafe rows and columns
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(grid[i][j] == 'S') {
                rowSafe[i] = false;
                colSafe[j] = false;
            }
        }
    }

    int res = 0;

    // Step 2: eat safe rows
    for(int i = 0; i < r; i++) {
        if(rowSafe[i]) {
            res += c;
        }
    }

    // Step 3: eat safe columns (avoid double count)
    for(int j = 0; j < c; j++) {
        if(colSafe[j]) {
            for(int i = 0; i < r; i++) {
                if(!rowSafe[i]) {
                    res++;
                }
            }
        }
    }

    cout << res << endl;
    return 0;
}