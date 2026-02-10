#include <bits/stdc++.h>
using namespace std;

int main() {
    int row = -1, col = -1;

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            int x;
            cin>>x;

            if(x == 1) {
                row = i;
                col = j;
            }
        }
    }

    int ans = abs(row - 3) + abs(col - 3);
    cout<<ans<<endl;

    return 0;
}