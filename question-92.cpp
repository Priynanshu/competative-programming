#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x = points[i].first;
        int y = points[i].second;

        bool left = false, right = false;
        bool up = false, down = false;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            int x2 = points[j].first;
            int y2 = points[j].second;

            if (y2 == y) {
                if (x2 < x) left = true;
                if (x2 > x) right = true;
            }

            if (x2 == x) {
                if (y2 < y) down = true;
                if (y2 > y) up = true;
            }
        }

        if (left && right && up && down)
            ans++;
    }

    cout << ans << '\n';

    return 0;
}