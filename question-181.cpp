#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> A(m, vector<int>(n, 1));

    // Input B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // For every B[i][j] == 0,
    // A's entire row i and column j must be 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (B[i][j] == 0) {

                // Make row i = 0
                for (int k = 0; k < n; k++) {
                    A[i][k] = 0;
                }

                // Make column j = 0
                for (int k = 0; k < m; k++) {
                    A[k][j] = 0;
                }
            }
        }
    }

    // Generate B again from our A
    vector<vector<int>> check(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            // OR of row i
            for (int k = 0; k < n; k++) {
                check[i][j] |= A[i][k];
            }

            // OR of column j
            for (int k = 0; k < m; k++) {
                check[i][j] |= A[k][j];
            }
        }
    }

    // Compare original B with generated B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (B[i][j] != check[i][j]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    // Valid A found
    cout << "YES\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}