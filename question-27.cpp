#include <bits/stdc++.h>
using namespace std;

bool helper(int n, vector<int> &arr) {
    if(n <= 1) {
        return true;
    }

    if(arr[n-1] < arr[n-2]) {
        return false;
    }

    return helper(n-2, arr);
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    cout<<helper(n, arr)<<endl;

    return 0;
}