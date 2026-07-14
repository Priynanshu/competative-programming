#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, q;
        scanf("%d %d", &n, &q);
        char s[200005];
        scanf("%s", s+1);
        
        vector<int> pref(n+2, 0);
        for(int i = 2; i <= n; i++)
            pref[i] = pref[i-1] + (s[i] == s[i-1] ? 1 : 0);
        
        while(q--) {
            int l, r, k;
            scanf("%d %d %d", &l, &r, &k);
            
            int badCount = pref[r] - pref[l];
            int opsNeeded = (badCount + 1) / 2;
            
            printf(opsNeeded <= k ? "YES\n" : "NO\n");
        }
    }
    return 0;
}