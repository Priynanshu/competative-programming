#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> color(n + 1, 0);

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        bool used[4] = {false};

        if(color[a]) used[color[a]] = true;
        if(color[b]) used[color[b]] = true;
        if(color[c]) used[color[c]] = true;

        vector<int> dancers = {a, b, c};

        for(int d : dancers) {
            if(color[d] == 0) {
                for(int col = 1; col <= 3; col++) {
                    if(!used[col]) {
                        color[d] = col;
                        used[col] = true;
                        break;
                    }
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << color[i] << " ";
    }
}