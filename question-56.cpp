#include <bits/stdc++.h>
using namespace std;

int main() {
    string sum;
    cin>>sum;

    int n = sum.size();

    for(int i = 0; i < n - 2; i += 2) {
        for(int j = i + 2; j < n; j += 2) {
            if(sum[i] > sum[j]) {
                swap(sum[i], sum[j]);
            }
        }
    }

    cout<<sum<<endl;

    return 0;
}