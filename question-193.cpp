#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(grid[i][j] == 'W') {

                for(int k = 0; k < 4; k++) {

                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni >= 0 && ni < n &&
                       nj >= 0 && nj < m) {

                        if(grid[ni][nj] == 'P') {
                            ans++;
                            grid[ni][nj] = '.';
                            break;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}