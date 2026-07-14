#include <bits/stdc++.h>
using namespace std;

int par[200005], rnk[200005];

int find(int x){
    while(par[x] != x){
        par[x] = par[par[x]];
        x = par[x];
    }
    return x;
}

void unite(int a, int b){
    a = find(a); b = find(b);
    if(a == b) return;
    if(rnk[a] < rnk[b]) swap(a, b);
    par[b] = a;
    if(rnk[a] == rnk[b]) rnk[a]++;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        vector<int> p(n+1);
        for(int i = 1; i <= n; i++) scanf("%d", &p[i]);
        
        for(int i = 1; i <= n; i++){
            par[i] = i;
            rnk[i] = 0;
        }
        
        for(int i = 1; i + x <= n; i++) unite(i, i + x);
        for(int i = 1; i + y <= n; i++) unite(i, i + y);
        
        bool ok = true;
        for(int i = 1; i <= n; i++){
            if(find(i) != find(p[i])){
                ok = false;
                break;
            }
        }
        
        printf(ok ? "YES\n" : "NO\n");
    }
    return 0;
}