#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp = {
        {"C", 0}, {"C#", 1}, {"D", 2}, {"D#", 3},
        {"E", 4}, {"F", 5}, {"F#", 6}, {"G", 7},
        {"G#", 8}, {"A", 9}, {"B", 10}, {"H", 11}
    };

    vector<string> notes(3);
    for (int i = 0; i < 3; i++)
        cin >> notes[i];

    sort(notes.begin(), notes.end());

    do {
        int x = mp[notes[0]];
        int y = mp[notes[1]];
        int z = mp[notes[2]];

        int d1 = (y - x + 12) % 12;
        int d2 = (z - y + 12) % 12;

        if (d1 == 4 && d2 == 3) {
            cout << "major\n";
            return 0;
        }

        if (d1 == 3 && d2 == 4) {
            cout << "minor\n";
            return 0;
        }

    } while (next_permutation(notes.begin(), notes.end()));

    cout << "strange\n";

    return 0;
}