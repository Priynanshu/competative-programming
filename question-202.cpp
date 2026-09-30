#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
    int n, x0, y0;
    cin >> n >> x0 >> y0;

    set<pair<int, int>> lines;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        int dx = x - x0;
        int dy = y - y0;

        int g = gcd(abs(dx), abs(dy));

        dx /= g;
        dy /= g;

        // Opposite directions ko same line banana hai
        if(dx < 0 || (dx == 0 && dy < 0)) {
            dx = -dx;
            dy = -dy;
        }

        lines.insert({dx, dy});
    }

    cout << lines.size() << endl;

    return 0;
}