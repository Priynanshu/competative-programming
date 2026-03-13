#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> indexes(n);

    for(int i=0; i<n; i++) {
        cin>>indexes[i];
    }

    sort(indexes.begin(), indexes.end());

    int sum = 1;

    for(int i=0; i<n; i++) {
        if(sum != indexes[i]) {
            cout<<sum<<endl;
            return 0;
        }
        sum += 1;
    }

    cout<<sum<<endl;
    return 0;
}