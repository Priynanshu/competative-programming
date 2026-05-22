#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = (k * l) / nl;
    int total_lime = c * d;
    int total_salt = p / np;

    int res = min(total_drink, min(total_lime, total_salt)) / n;

    cout << res << endl;

    return 0;
}