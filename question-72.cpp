#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n), PG, M, PE;

    for(int i = 0; i < n; i++) {
        cin >> t[i];
        if(t[i] == 1) {
            PG.push_back(i+1);
        } else if(t[i] == 2) {
            M.push_back(i+1);
        } else {
            PE.push_back(i+1);
        }
    }

    int sizePG = PG.size();
    int sizeM = M.size();   
    int sizePE = PE.size();

    int minSize = min({sizePG, sizeM, sizePE});

    if(minSize == 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << minSize << endl;

    for(int i = 0; i < minSize; i++) {
        cout << PG[i] << " " << M[i]<< " " << PE[i] << endl;
    }

    return 0;
}