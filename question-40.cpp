#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, l;
        cin >> n >> l;

        vector<int> x(n);
        for(int i = 0; i < n; i++) {
            cin >> x[i];
        }

        int result = 0;

        // Har bit position check 
        for(int bit = 0; bit < l; bit++) {

            int countOnes = 0;

            // Count kitne numbers me ye bit 1 hai
            for(int i = 0; i < n; i++) {
                if(x[i] & (1 << bit)) {
                    countOnes++;
                }
            }

            // Majority decide 
            if(countOnes > n / 2) {
                result |= (1 << bit);
            }
        }

        cout << result << "\n";
    }

    return 0;
}