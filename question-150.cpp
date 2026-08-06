#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        map<int,int> freq;
        long long total = 0;
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            freq[a[i]]++;
            total += a[i];
        }

        int v = -1, f = 0;
        for(auto &p : freq){
            if(p.second > f){
                f = p.second;
                v = p.first;
            }
        }

        long long ans;
        if(f <= (n + 1) / 2){
            ans = total; 
        } else {       
            int m = n - f;
            long long included_v = m + 2LL;
            long long other_sum = total - (long long)f * v; 
            ans = included_v * v + other_sum;
        }

        printf("%lld\n", ans);
    }
    return 0;
}