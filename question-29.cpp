#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin>>A>>B;

    int minFacto = min(A, B);
    long long product = 1;
    for(long long i=1; i<=minFacto; i++) {
        product *= i;
    }
    cout<<product<<endl;

    return 0;
}