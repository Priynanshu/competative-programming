#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;

    vector<long long> triangular;

    for (long long k = 1;; k++) {
        long long value = k * (k + 1) / 2;

        if (value > n)
            break;

        triangular.push_back(value);
    }

    int i = 0;
    int j = triangular.size()-1;

    while(i <= j) {
        long long sum = triangular[i] + triangular[j];
        if(sum == n) {
            cout<<"YES"<<endl;
            return 0;
        }else if(sum > n) {
            j--;
        }else {
            i++;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}