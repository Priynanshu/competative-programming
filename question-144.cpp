#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        int rounds = 0;
        while(true){
            if(a==b || b==c || a==c) break;
            int mx = max({a,b,c});
            int mn = min({a,b,c});
            if(a==mx) a--; else if(b==mx) b--; else c--;
            if(a==mn) a++; else if(b==mn) b++; else c++;
            rounds++;
        }
        printf("%d\n", rounds);
    }
    return 0;
}