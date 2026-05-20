#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int res = INT_MIN;

    for(int i=0; i<n; i++) {
        int f, t;
        cin >> f >> t;

        if(t > k) {
            res = max(res, f - (t - k));
        } else {
            res = max(res, f);
        }
    }
    if(res == INT_MIN) {
        cout << -1<<endl;
    } else {
        cout << res<<endl;
    }
}