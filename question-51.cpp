#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> lucky;

// generate all lucky numbers
void generate(ll num)
{
    if (num > 1e10)
        return;
    if (num > 0)
        lucky.push_back(num);

    generate(num * 10 + 4);
    generate(num * 10 + 7);
}

int main()
{
    ll l, r;
    cin >> l >> r;

    generate(0);
    sort(lucky.begin(), lucky.end());

    ll ans = 0;
    ll current = l;

    for (int i = 0; i < lucky.size(); i++)
    {
        ll x = lucky[i];

        if (x < current)
            continue;

        ll end = min(r, x);
        ans += (end - current + 1) * x;

        current = x + 1;

        if (current > r)
            break;
    }

    cout << ans << endl;
}