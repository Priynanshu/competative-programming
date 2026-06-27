#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    int maxCorrect = -1;
    int minWrong = 102;
    int minCorrect = 102;

    for(int i=0; i<n; i++) {
        cin>> a[i];
        if(a[i] >= maxCorrect) {
            maxCorrect = a[i];
        }
        if(a[i] <= minCorrect) {
            minCorrect = a[i];
        }
    }
    for(int i=0; i<m; i++) {
        cin>> b[i];
        if(b[i] <= minWrong) {
            minWrong = b[i];
        } 
    }

    int v =  max(maxCorrect, 2*minCorrect);

    if(v < minWrong) {
        cout<<v<<endl;
    }else {
        cout<<-1<<endl;
    }

    return 0;
}