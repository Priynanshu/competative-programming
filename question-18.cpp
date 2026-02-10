#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> num(n);
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    
    int best = num[0];
    int worst = num[0];
    int count = 0;

    for(int x : num) {
        if(x > best) {
            count++;
            best = x;
        }
        else if(x < worst) {
            count++;
            worst = x;
        } else {
            continue;
        }
    }
    cout<<count<<endl;

    return 0;
}