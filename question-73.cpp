#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> song(n);
    for(int i = 0; i < n; i++) {
        cin >> song[i];
    }

    int totalSong = accumulate(song.begin(), song.end(), 0);
    int totalRestTime = (n - 1) * 10;

    int totalMinTime = totalSong + totalRestTime;

    if(totalMinTime > d) {
        cout << -1 << endl;
        return 0;
    }

    int remainingTime = d - totalMinTime;

    int totalJokes = (totalRestTime / 5) + (remainingTime / 5);

    cout << totalJokes << endl;

    return 0;
}