#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // agar positive hai to direct print
    if(n >= 0) {
        cout << n;
    } 
    else {
        // option 1: last digit remove
        int opt1 = n / 10;

        // option 2: second last digit remove
        int opt2 = (n / 100) * 10 + (n % 10);

        cout << max(opt1, opt2);
    }

    return 0;
}