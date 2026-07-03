#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int n;
    cin>> n;

    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int g = a[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, a[i]);  
    }

    cout << g*n << endl;
}