#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;

    int count = 0;

    for (int i = 1; i < p; i++) {

        bool primitive = true;
        long long value = 1;

        for (int j = 1; j < p; j++) {
            value = (value * i) % p;

            if (value == 1 && j != p - 1) {
                primitive = false;
                break;
            }
        }

        if (primitive) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}