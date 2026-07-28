#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin>>r1 >> c1 >>r2 >> c2;

    int dr = abs(r1 - r2);
    int dc = abs(c1 - c2);

    if(r1 == r2 || c1 == c2) {
        cout<<1<<" ";
    }else {
        cout<<2<<" ";
    }

    if((r1+c1) % 2 != (r2 + c2) % 2) {
        cout<<0<<" ";
    }else if(dr == dc) {
        cout<<1<<" ";
    }else {
        cout<<2<<" ";
    }

    cout<<max(dr, dc)<<endl;

    return 0;
}