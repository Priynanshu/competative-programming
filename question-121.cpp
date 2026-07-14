#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll NEG = LLONG_MIN / 2;

struct FenwickMax {
    int n;
    vector<ll> tree;
    void init(int n_){
        n = n_;
        tree.assign(n+1, NEG);
    }
    void update(int i, ll val){
        for(; i<=n; i += i & (-i))
            tree[i] = max(tree[i], val);
    }
    ll query(int i){ // prefix max [1,i]
        ll res = NEG;
        for(; i>0; i -= i & (-i))
            res = max(res, tree[i]);
        return res;
    }
};

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        vector<ll> a(n+1);
        for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
        
        vector<vector<int>> bucket(n+2);
        for(int j = 1; j <= n; j++){
            ll act = (ll)j + a[j] + 1;
            if(act <= n) bucket[act].push_back(j);
        }
        
        FenwickMax fen;
        fen.init(n);
        
        vector<ll> f(n+1, 0);
        f[0] = 0;
        
        for(int i = 1; i <= n; i++){
            for(int j : bucket[i]){
                fen.update(j, f[j]);
            }
            
            ll hi = (ll)i - 1 - a[i];
            ll best = 0; // option of starting fresh (no previous pick)
            if(hi >= 1){
                ll q = fen.query((int)min(hi, (ll)n));
                if(q > best) best = q;
            }
            
            ll candidate = a[i] + best;
            f[i] = max(f[i-1], candidate);
        }
        
        printf("%lld\n", f[n]);
    }
    return 0;
}