#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        scanf("%d %d", &n, &m);
        bool avail[26] = {false};
        for(int i = 0; i < n; i++){
            char buf[25];
            scanf("%s", buf);
            char c = toupper(buf[0]);
            avail[c - 'A'] = true;
        }
        vector<string> abbr(m);
        for(int i = 0; i < m; i++){
            char buf[25];
            scanf("%s", buf);
            abbr[i] = buf;
        }
        vector<bool> used(m, false);
        int usedCount = 0;
        bool changed = true;
        while(changed){
            changed = false;
            for(int i = 0; i < m; i++){
                if(used[i]) continue;
                bool ok = true;
                for(char c : abbr[i]){
                    if(!avail[c - 'A']){ ok = false; break; }
                }
                if(ok){
                    used[i] = true;
                    usedCount++;
                    avail[abbr[i][0] - 'A'] = true;
                    changed = true;
                }
            }
        }
        printf(usedCount == m ? "YES\n" : "NO\n");
    }
    return 0;
}