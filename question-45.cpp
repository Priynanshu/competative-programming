#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int count = n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && a[i] == b[j]) {
                count--;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}