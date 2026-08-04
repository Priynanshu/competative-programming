#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char buf[200005];
        scanf("%s", buf);
        string s(buf);
        
        // Build blocks: (char, length)
        vector<char> bch;
        vector<int> blen;
        vector<int> block_id(n);
        
        int idx = 0;
        while(idx < n){
            int j = idx;
            while(j < n && s[j] == s[idx]) j++;
            bch.push_back(s[idx]);
            blen.push_back(j - idx);
            for(int k = idx; k < j; k++) block_id[k] = (int)bch.size() - 1;
            idx = j;
        }
        
        int base = (int)bch.size();
        int ans = INT_MAX;
        
        // interior indices: 0-indexed pos from 1 to n-2 (i.e., 2<=i<=n-1 in 1-indexed)
        for(int pos = 1; pos <= n - 2; pos++){
            int bid = block_id[pos];
            int len = blen[bid];
            int candidate;
            if(len > 1){
                candidate = base; // delta 0
            } else {
                // block length 1, prev and next blocks guaranteed to exist
                char prevc = bch[bid - 1];
                char nextc = bch[bid + 1];
                if(prevc == nextc){
                    candidate = base - 2;
                } else {
                    candidate = base - 1;
                }
            }
            if(candidate < ans) ans = candidate;
        }
        
        printf("%d\n", ans);
    }
    return 0;
}