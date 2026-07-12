#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int k, d;
    cin >> k >> d;

    if(k > 1 && d == 0) {
        cout<<"No solution"<<endl;
        return 0;
    }
    if(d == 0) {
        cout<<0<<endl;
        return 0;
    }

    string digits = to_string(d);

    for (int i = 0; i < k - 1; i++) {
        digits += '0';
    }

    cout << digits << endl;
    
    
    return 0;
}