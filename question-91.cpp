#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int curr = 1;
    int ans = 0;

    while (n--)
    {
        int l, r;
        cin >> l >> r;

        while (curr + x <= l)
            curr += x;

        ans += l - curr;
        curr = l;

        ans += r - curr + 1;
        curr = r + 1;
    }
    cout << ans << endl;

    return 0;
}