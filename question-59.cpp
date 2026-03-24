#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = n;
    bool isSame = false;

    while(num != 0) {
        int digit = num % 10;
        num /= 10;

        if(digit == 4 || digit == 7) {
            isSame = true;
        }
        else {
            isSame = false;
            break;  
        }
    }

    if(isSame || n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}