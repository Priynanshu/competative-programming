#include <bits/stdc++.h>
using namespace std;

int helper(int n, int sum) {
    if(n == 0) {
        return sum;
    }

    int digit = n % 10;
    sum += digit;
    n /= 10;

    return helper(n, sum);
}

int main() {
    int n;
    cin>>n;
    int sum = 0;

    cout<<helper(n, sum)<<endl;

    return 0;
}