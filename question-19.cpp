#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;
    int maxCapacity = 0;

    while(n--) {
        int a, b;
        cin >> a >> b;

        current -= a;     
        current += b;      
        maxCapacity = max(maxCapacity, current);
    }

    cout << maxCapacity << endl;
    return 0;
}
