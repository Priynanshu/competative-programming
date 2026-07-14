#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for(auto &x : a) scanf("%lld", &x);
        
        vector<long long> prefA(n+1, 0);
        for(int i = 0; i < n; i++) prefA[i+1] = prefA[i] + a[i];
        
        long long S = prefA[n];
        
        vector<long long> b(n);
        long long prevPref = 0, prevVal = 0;
        bool ok = true;
        
        for(int i = 1; i <= n; i++){
            long long remaining = n - i;
            long long minPossible = prevVal + 1;
            long long maxAllowedTotal = S - (remaining * (remaining + 1) / 2 + remaining * minPossible);
            long long val = minPossible;
            
            if(i < n){
                long long curPref = prevPref + val;
                if(curPref > prefA[i]){
                    ok = false;
                    break;
                }
            }
            
            prevVal = val;
            prevPref += val;
        }
        
        if(ok){
            long long usedSum = prevPref - (0);
            long long minTotalWithIncreasing = 0;
            long long v = 0;
            for(int i = 1; i <= n; i++){
                v += 1;
                minTotalWithIncreasing += v;
            }
            if(minTotalWithIncreasing > S) ok = false;
        }
        
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}