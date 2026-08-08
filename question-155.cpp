#include <bits/stdc++.h>
using namespace std;

struct Point {
    long long x, y;
};

long long dist2(Point a, Point b) {
    long long dx = a.x - b.x;
    long long dy = a.y - b.y;

    return dx * dx + dy * dy;
}

bool isRight(Point a, Point b, Point c) {
    // Check that triangle is non-degenerate
    long long area2 =
        (b.x - a.x) * (c.y - a.y) -
        (b.y - a.y) * (c.x - a.x);

    if (area2 == 0)
        return false;

    long long d1 = dist2(a, b);
    long long d2 = dist2(b, c);
    long long d3 = dist2(c, a);

    if (d1 > d2)
        swap(d1, d2);

    if (d2 > d3)
        swap(d2, d3);

    if (d1 > d2)
        swap(d1, d2);

    return d1 + d2 == d3;
}

int main() {
    Point p[3];

    for (int i = 0; i < 3; i++) {
        cin >> p[i].x >> p[i].y;
    }

    // Already a right triangle
    if (isRight(p[0], p[1], p[2])) {
        cout << "RIGHT\n";
        return 0;
    }

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    // Move exactly one point by distance 1
    for (int i = 0; i < 3; i++) {

        Point original = p[i];

        for (int j = 0; j < 4; j++) {

            p[i].x = original.x + dx[j];
            p[i].y = original.y + dy[j];

            if (isRight(p[0], p[1], p[2])) {
                cout << "ALMOST\n";
                return 0;
            }
        }

        p[i] = original;
    }

    cout << "NEITHER\n";

    return 0;
}