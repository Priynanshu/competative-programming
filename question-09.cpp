#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int luckyCount = 0;

    while(n > 0) {
        int digit = n % 10;
        if(digit == 4 || digit == 7) {
            luckyCount++;
        }
        n /= 10;
    }

    // now check if luckyCount is a lucky number
    if(luckyCount == 0) {
        cout << "NO";
        return 0;
    }

    while(luckyCount > 0) {
        int digit = luckyCount % 10;
        if(digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
        luckyCount /= 10;
    }

    cout << "YES";
    return 0;
}
