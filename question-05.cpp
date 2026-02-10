#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin>>y;

    while(true) {
        y++;
        int temp = y;

        vector<bool> seen(10, false);
        bool ok = true;
        while(temp > 0) {
            int digit = temp % 10;
            if(seen[digit]) {
                ok = false;
                break;
            }

            seen[digit] = true;
            temp /= 10;
        }
        if(ok) {
            cout<<y<<endl;
            break;
        }
    }

    return 0;
}