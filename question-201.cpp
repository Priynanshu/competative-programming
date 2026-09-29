#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> result;

    int x = n;
    result.push_back(x);

    for(int i = 2; i * i <= x; i++) {

        while(x % i == 0) {
            x = x / i;
            result.push_back(x);
        }
    }

    if(x > 1) {
        x = 1;
        result.push_back(x);
    }

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}