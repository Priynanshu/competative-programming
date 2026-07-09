#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin>> n;

    vector<int> a(n);

    for(int i=0; i<n; i++) {
        cin>> a[i];
    }

    if(n == 1) {
        cout<<"YES"<<endl;
        return 0;
    }

    unordered_map<int, int> mp;

    for (int x : a) {
        mp[x]++;
    }
    int mx = -1;
    
    for(auto it : mp) {
        int freq = it.second;
        mx = max(mx, freq);
    }

    int min = n - mx;
    if(mx <= min + 1) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

    return 0;
}