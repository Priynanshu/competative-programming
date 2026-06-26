#include <bits/stdc++.h>
using namespace std;

int solver(int n, int a, int b, int c, vector<int>& dp) {

    if(n == 0)
        return 0;

    if(n < 0)
        return -1000000000;

    if(dp[n] != -1)
        return dp[n];

    int cutA = 1 + solver(n - a, a, b, c, dp);
    int cutB = 1 + solver(n - b, a, b, c, dp);
    int cutC = 1 + solver(n - c, a, b, c, dp);

    return dp[n] = max({cutA, cutB, cutC});
}

int main() {

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);

    cout << solver(n, a, b, c, dp);

    return 0;
}