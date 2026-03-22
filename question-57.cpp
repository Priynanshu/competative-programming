#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> coins(n);
    for(int i=0; i<n; i++) {
        cin>>coins[i];
    }

    sort(coins.rbegin(), coins.rend());
    int totalSum = accumulate(coins.begin(), coins.end(), 0);
    int count = 0;
    int maxTakeCoins = 0;
    int restCoins = 0;

    for(int i=0; i<n; i++) {
        maxTakeCoins += coins[i];
        restCoins = totalSum - maxTakeCoins;
        count++;
        if(maxTakeCoins > restCoins) {
            cout<<count<<endl;
            return 0;
        }   
    }
    return 0;
}