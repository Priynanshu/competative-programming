#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;

    int n = a;
    bool flag = false;

    while(!flag) {
        n += 1;

        int d = n;
        while(d != 0) {
            d = abs(d);
            int digit = d % 10;
            if(digit == 8) {
                flag = true;
                break;
            }
            d /= 10;
        }
    }
    cout<<n - a<<endl;
    return 0;
}