#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        vector<long long> a(n+1);
        for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
        
        vector<int> b(m);
        for(int i = 0; i < m; i++) scanf("%d", &b[i]);
        sort(b.begin(), b.end());
        
        vector<long long> pref(n+1, 0);
        for(int i = 1; i <= n; i++) pref[i] = pref[i-1] + a[i];
        
        const long long NEG_INF = LLONG_MIN / 2;
        
        // last segment: (b[m-1], n]  -> always unflipped (parity 0)
        long long dp0 = pref[n] - pref[b[m-1]];
        long long dp1 = NEG_INF;
        
        for(int t2 = m - 1; t2 >= 0; t2--) {
            int leftBound = (t2 == 0) ? 0 : b[t2 - 1];
            int rightBound = b[t2];
            long long segSum = pref[rightBound] - pref[leftBound];
            
            long long best = max(dp0, dp1);
            long long new_dp0 = best + segSum;
            long long new_dp1 = best - segSum;
            
            dp0 = new_dp0;
            dp1 = new_dp1;
        }
        
        printf("%lld\n", max(dp0, dp1));
    }
    return 0;
}