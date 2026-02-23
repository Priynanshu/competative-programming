#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a1, a2, a3;
        cin>> a1>> a2>> a3;

        int d = a1 + a2 + a3;
        if(d % 3 == 0) {
            cout<<"0"<<endl;
        }
        else {
            cout<<"1"<<endl;
        }
    }

    return 0;
}