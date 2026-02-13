#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> kp;
    if(n % 2 == 1) {
        int odd = (n/2)-1;
        for(int i=0; i<odd; i++) {
            kp.push_back(2);
        }
        kp.push_back(3);

    } else {
        for(int i=0; i<n/2; i++) {
            kp.push_back(2);
        }
    }

    cout<<kp.size()<<endl;
    for(int i=0; i<kp.size(); i++) {
        cout<<kp[i]<<" ";
    }

    return 0;
}