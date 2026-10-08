#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin>> a >> b >> c >> d;

    double p = (double)a / b;
    double q = (double)c / d;

    double res = p / (p + q - (p * q));
    cout<<res<<endl;

    return 0;
}