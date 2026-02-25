#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    long long num = 1;

    while(n--) {
        num = num * 1378;
    }

    int lastDigit = num % 10;

    cout<<lastDigit<<endl;

    return 0;
}