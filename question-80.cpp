#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<char>> grid(n, vector<char>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            int oCount = 0;

            // up
            if(i - 1 >= 0 && grid[i-1][j] == 'o') oCount++;

            // down
            if(i + 1 < n && grid[i+1][j] == 'o') oCount++;

            // left
            if(j - 1 >= 0 && grid[i][j-1] == 'o') oCount++;

            // right
            if(j + 1 < n && grid[i][j+1] == 'o') oCount++;

            if(oCount % 2 != 0) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}