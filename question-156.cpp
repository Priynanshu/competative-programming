#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, i, j, a, b;
    cin >> n >> m >> i >> j >> a >> b;

    // Already at a corner
    if ((i == 1 || i == n) && (j == 1 || j == m)) {
        cout << 0 << endl;
        return 0;
    }

    long long ans = LLONG_MAX;

    long long corners[4][2] = {
        {1, 1},
        {1, m},
        {n, 1},
        {n, m}
    };

    for (int p = 0; p < 4; p++) {

        long long x = corners[p][0];
        long long y = corners[p][1];

        long long dx = abs(x - i);
        long long dy = abs(y - j);

        // Distance must be exactly divisible
        // by the movement size.
        if (dx % a != 0 || dy % b != 0)
            continue;

        long long rowMoves = dx / a;
        long long colMoves = dy / b;

        // Both coordinates change in every move.
        // Therefore their parity must be same.
        if (rowMoves % 2 != colMoves % 2)
            continue;

        long long moves = max(rowMoves, colMoves);

        // If we need to move, the board must allow
        // movement in both directions.
        if (n <= a || m <= b)
            continue;

        ans = min(ans, moves);
    }

    if (ans == LLONG_MAX)
        cout << "Poor Inna and pony!" << endl;
    else
        cout << ans << endl;

    return 0;
}