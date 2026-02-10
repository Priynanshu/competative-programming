#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 != 0) {
        cout << -1;
        return 0;
    }

    vector<int> result;

    for(int i = 1; i <= n; i += 2) {
        result.push_back(i + 1);
        result.push_back(i);
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
