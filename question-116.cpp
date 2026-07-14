#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        char s[15];
        scanf("%s", s);
        int maxLen = 0, cur = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '#') cur++;
            else cur = 0;
            maxLen = max(maxLen, cur);
        }
        int ans = (maxLen + 1) / 2; // ceil(maxLen/2)
        printf("%d\n", ans);
    }
    return 0;
}