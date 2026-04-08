#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> num(n);
    int evenCount = 0;
    int oddCount = 0;

    for(int i=0; i<n; i++) {
        cin>>num[i];
        if(num[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    int minCount = min(evenCount, oddCount);

    for(int i=0; i<n; i++) {
        if(minCount == evenCount && num[i] % 2 == 0) {
            cout<<i+1<<endl;
            break;
        } else if(minCount == oddCount && num[i] % 2 != 0) {
            cout<<i+1<<endl;
            break;
        }
    }

    return 0;
}