#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;

long long computeWays(const string &s, int start, int n){
    bool validA = true, validB = true; // A: starts with '0', B: starts with '1'
    int idx = 0;
    for(int i = start; i < n; i += 2, idx++){
        char c = s[i];
        char expA = (idx % 2 == 0) ? '0' : '1';
        char expB = (idx % 2 == 0) ? '1' : '0';
        if(c != '?'){
            if(c != expA) validA = false;
            if(c != expB) validB = false;
        }
    }
    return (validA ? 1 : 0) + (validB ? 1 : 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long w1 = computeWays(s, 0, n); // 0-indexed positions 0,2,4,...
        long long w2 = computeWays(s, 1, n); // 0-indexed positions 1,3,5,...
        long long ans = (w1 * w2) % MOD;
        cout << ans << "\n";
    }
    return 0;
}