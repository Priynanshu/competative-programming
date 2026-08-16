#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    // Minimum:
    // Teams ko jitna possible ho equally distribute karo
    long long x = n / m;
    long long rem = n % m;

    long long kmin = rem * (x + 1) * x / 2
                    + (m - rem) * x * (x - 1) / 2;

    // Maximum:
    // Ek team mein maximum log, baaki teams mein 1-1
    long long big = n - m + 1;

    long long kmax = big * (big - 1) / 2;

    cout << kmin << " " << kmax << endl;

    return 0;
}