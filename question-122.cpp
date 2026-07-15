#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string right[5] = {
        "-OOOO",
        "O-OOO",
        "OO-OO",
        "OOO-O",
        "OOOO-"
    };

    if (n == 0) {
        cout << "O-|" << right[0] << endl;
        return 0;
    }

    while (n > 0) {
        int digit = n % 10;

        if (digit < 5)
            cout << "O-|";
        else
            cout << "-O|";

        cout << right[digit % 5] << endl;

        n /= 10;
    }

    return 0;
}