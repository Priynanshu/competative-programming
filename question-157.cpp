#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long a,b,c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long arr[3] = {a,b,c};
        sort(arr, arr+3);
        long long x = arr[0], y = arr[1], z = arr[2];
        long long ans;
        if (x + y <= z) {
            ans = y;
        } else {
            ans = z - x;
        }
        printf("%lld\n", ans);
    }
    return 0;
}