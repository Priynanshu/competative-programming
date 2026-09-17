#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, sumTime;
    cin >> d >> sumTime;

    vector<int> mn(d), mx(d), schedule(d);

    int sumMin = 0;
    int sumMax = 0;

    for(int i = 0; i < d; i++) {
        cin >> mn[i] >> mx[i];

        sumMin += mn[i];
        sumMax += mx[i];

        schedule[i] = mn[i];
    }

    // Check whether solution is possible
    if(sumTime < sumMin || sumTime > sumMax) {
        cout << "NO" << endl;
        return 0;
    }

    // Initially minimum hours assigned
    int extra = sumTime - sumMin;

    // Distribute remaining hours
    for(int i = 0; i < d; i++) {

        int canAdd = mx[i] - mn[i];

        int add = min(extra, canAdd);

        schedule[i] += add;
        extra -= add;
    }

    cout << "YES" << endl;

    for(int i = 0; i < d; i++) {
        cout << schedule[i] << " ";
    }

    cout << endl;

    return 0;
}