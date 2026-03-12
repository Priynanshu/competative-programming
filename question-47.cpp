#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long left = a * d;
    long long right = b * c;

     long long p, q;

    if(left < right) {
        p = b*c - a*d;
        q = b*c;
    }else if(left > right) {
         p = a*d - b*c;
        q = a*d;
    }else {
        cout<<"0/1";
        return 0;
    }

    long long g = __gcd(p, q);
    p /= g;
    q /= g;

    cout<<p<<"/"<<q;

    return 0;
}