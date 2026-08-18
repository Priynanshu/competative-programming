#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    vector<int> copy = a;
    sort(copy.begin(), copy.end());
    if(a == copy) {
        cout<< "yes"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }

    int l = 0;
    int r = n-1;

    while(l < n && a[l] == copy[l]) {
        l++;
    }

    while(r >= 0 && a[r] == copy[r]) {
        r--;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if(a == copy) {
        cout<< "yes"<<endl;
        cout<<l+1<<" "<<r+1<<endl;
    }else {
        cout<<"no"<<endl;
    }

    return 0;
}