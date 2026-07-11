#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> table(n, vector<int> (n, 0));

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == j) {
                table[i][j] = k;
            }
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}