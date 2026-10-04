#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // finish[j] = time when painter j becomes free
    vector<long long> finish(n, 0);

    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {
            int time;
            cin >> time;

            if (j == 0) {
                // First painter only waits for previous picture
                finish[j] += time;
            }
            else {
                // Painter j can start only when:
                // 1. Current picture reaches him
                // 2. He becomes free from previous picture
                finish[j] = max(finish[j], finish[j - 1]) + time;
            }
        }

        cout << finish[n - 1] << " ";
    }

    cout << endl;

    return 0;
}