#include <bits/stdc++.h>
using namespace std;

int main() {
    int cupIdx;
    cin >> cupIdx;

    for (int i = 0; i < 3; i++) {
        int cupA, cupB;
        cin >> cupA >> cupB;

        if (cupIdx == cupA)
            cupIdx = cupB;
        else if (cupIdx == cupB)
            cupIdx = cupA;
    }

    cout << cupIdx << endl;

    return 0;
}