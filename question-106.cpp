#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin>>a >>b >>c;

    int x = sqrt((a*c)/b);
    int y = sqrt((a*b)/c);
    int z = sqrt((b*c)/a);

    cout<<4*(x + y + z)<<endl;

    return 0;
}