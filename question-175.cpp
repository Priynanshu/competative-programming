#include <bits/stdc++.h>
using namespace std;

int main() {
    long long r, x, y, x2, y2;
    cin >> r >> x >> y >> x2 >> y2;

    long long dx = x2 - x;
    long long dy = y2 - y;

    long double distance = sqrt((long double)dx * dx + (long double)dy * dy);

    long long steps = ceil(distance / (2.0L * r));

    cout << steps << endl;

    return 0;
}