#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        ll S; int q;
        scanf("%lld %d", &S, &q);

        vector<ll> divs;
        for(ll i=1;i*i<=S;i++){
            if(S%i==0){
                divs.push_back(i);
                if(i!=S/i) divs.push_back(S/i);
            }
        }
        sort(divs.begin(), divs.end());

        vector<ll> blockEnd, cumSum, dVal;
        ll cum=0;
        ll j=1;
        while(j<=S){
            ll v = S/j;
            ll je = S/v;
            if(je > S) je = S;
            int idx = (int)(upper_bound(divs.begin(), divs.end(), v) - divs.begin()) - 1;
            ll d = divs[idx];
            ll cnt = je - j + 1;
            cum += d*cnt;
            blockEnd.push_back(je);
            cumSum.push_back(cum);
            dVal.push_back(d);
            j = je+1;
        }

        auto prefixSum = [&](ll Y)->ll{
            int idx = (int)(lower_bound(blockEnd.begin(), blockEnd.end(), Y) - blockEnd.begin());
            ll before = (idx==0)?0:cumSum[idx-1];
            ll jstart = (idx==0)?1:(blockEnd[idx-1]+1);
            ll d = dVal[idx];
            return before + d*(Y - jstart + 1);
        };

        string output;
        output.reserve((size_t)q*7);
        for(int i=0;i<q;i++){
            ll x,y;
            scanf("%lld %lld", &x, &y);
            int idx = (int)(lower_bound(divs.begin(), divs.end(), x) - divs.begin());
            ll delta = divs[idx];
            ll jstar = S/delta;
            ll m = min(jstar, y);
            ll ans = x*m + prefixSum(y) - prefixSum(m);
            output += to_string(ans);
            output += '\n';
        }
        printf("%s", output.c_str());
    }
    return 0;
}