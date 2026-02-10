#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> left(n), right(n);
    int leftZero = 0;
    int leftOne = 0;
    int rightZero = 0;
    int rightOne = 0;

    for(int i = 0; i < n; i++) {
        cin >> left[i] >> right[i];
        if(left[i] == 0) {
            leftZero++;
        } else {
            leftOne++;
        }
        
        if(right[i] == 0) {
            rightZero++;
        } else {
            rightOne++;
        }
    }

    int t = 0;
    if(leftZero <= leftOne) {
        t += leftZero;
    }
    else {
        t += leftOne;
    }

    if(rightZero <= rightOne) {
        t += rightZero;
    } else {
        t += rightOne;
    }

    cout<<t<<endl;
    
    return 0;
}
