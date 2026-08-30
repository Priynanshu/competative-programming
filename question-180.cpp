#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    // Try possible value of center
    for (int e = 1; e <= 100000; e++) {

        int S = 3 * e;

        // Find missing diagonal elements
        int x = S - a[0][1] - a[0][2]; // top-left
        int z = S - a[2][0] - a[2][1]; // bottom-right

        if (x <= 0 || z <= 0 || x > 100000 || z > 100000)
            continue;

        a[0][0] = x;
        a[1][1] = e;
        a[2][2] = z;

        bool ok = true;

        // Check rows
        for (int i = 0; i < 3; i++) {
            int sum = 0;

            for (int j = 0; j < 3; j++)
                sum += a[i][j];

            if (sum != S)
                ok = false;
        }

        // Check columns
        for (int j = 0; j < 3; j++) {
            int sum = 0;

            for (int i = 0; i < 3; i++)
                sum += a[i][j];

            if (sum != S)
                ok = false;
        }

        // Check diagonals
        int diagonal1 = a[0][0] + a[1][1] + a[2][2];
        int diagonal2 = a[0][2] + a[1][1] + a[2][0];

        if (diagonal1 != S || diagonal2 != S)
            ok = false;

        if (ok) {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << a[i][j] << " ";
                }
                cout << '\n';
            }

            return 0;
        }
    }

    return 0;
}