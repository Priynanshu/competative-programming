#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> filter(n);

    for (int i = 0; i < n; i++)
        cin >> filter[i];

    sort(filter.begin(), filter.end(), greater<int>());

    if (k >= m) {
        cout << 0;
        return 0;
    }

    int current = k;
    int count = 0;
    int result = -1;

    for (int i = 0; i < n; i++) {
        current += filter[i] - 1;
        count++;

        if (current >= m) {
            result = count;
            break;
        }
    }

    cout << result << endl;
}