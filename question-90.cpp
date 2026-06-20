#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> mat(n);

    for(int i = 0; i < n; i++) {
        cin >> mat[i];
    }

    char diag = mat[0][0];
    char other = mat[0][1];

    if(diag == other) {
        cout << "NO\n";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j || i + j == n - 1) {

                if(mat[i][j] != diag) {
                    cout << "NO\n";
                    return 0;
                }

            } else {

                if(mat[i][j] != other) {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }

    cout << "YES\n";

    return 0;
}