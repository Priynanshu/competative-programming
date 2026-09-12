#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    char flag = 'R';
    long long radii = 0;

    for(int i=0; i<n-1; i++) {
        if(flag == 'R') {
            radii += (a[i] * a[i]) - (a[i+1] * a[i+1]);
            flag = 'B';
        }else {
            flag = 'R';
        }
    }

    if(n % 2 != 0) {
        radii += a[n-1] * a[n-1];
    }

    double ans = radii * acos(-1);
    cout<<ans<<endl;

    return 0;
}