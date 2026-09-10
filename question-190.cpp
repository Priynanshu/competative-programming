#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    if(n < 3) {
        cout<<n<<endl;
        return 0;
    }
    int maxCount = 2;
    int count = 2;

    for(int i=2; i<n; i++) {
        int prevSum = a[i-1] + a[i-2];
        if(a[i] == prevSum) {
            count++;
            maxCount = max(maxCount, count);
        }else {
            count = 2;
        }
    }

    cout<<maxCount<<endl;
    return 0;
}