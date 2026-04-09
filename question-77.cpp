#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n >>k;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int count = 0;
    for(int i=0; i<n; i++) {
        a[i] = 5 - a[i];
        if(a[i] >= k) {
            count++;
        }
    }

    cout<<count/3<<endl;

    return 0;
}