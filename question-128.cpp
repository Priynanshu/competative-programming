#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int hour = stoi(s.substr(0, 2));
    int minute = stoi(s.substr(3, 2));

    while (true) {
        // Move to next minute
        minute++;

        if (minute == 60) {
            minute = 0;
            hour++;
        }

        if (hour == 24) {
            hour = 0;
        }

        int h1 = hour / 10;
        int h2 = hour % 10;
        int m1 = minute / 10;
        int m2 = minute % 10;

        if (h1 == m2 && h2 == m1) {
            printf("%02d:%02d\n", hour, minute);
            break;
        }
    }

    return 0;
}