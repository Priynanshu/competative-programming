#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
   vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0;

    for(int i=0; i<n-1; i++) {
        int profit = a[i] - a[i+1] - d;
        res = max(res, profit);
    }
    cout << res;
    return 0;
}