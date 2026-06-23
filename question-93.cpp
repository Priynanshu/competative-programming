#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n >>k;

    int result = 0;

    while(n--) {
        int num;
        cin>>num;
        int count = 0;

        while(num != 0) {
            int digit = num % 10;
            if(digit == 4 || digit == 7) {
                count++;
            }

            num /= 10;
        }
        if(count <= k) {
            result++;
        }
    }
    cout<<result<<endl;

    return 0;
}