#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> p(n);
    for(int i=0; i<n; i++) {
        cin>>p[i];
    }

   double result = (double)accumulate(p.begin(), p.end(), 0) / n;
    cout<<result<<endl;

    return 0;
}