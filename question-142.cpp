#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] == a[j] + a[k])
                {
                    cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                    return 0;
                }
                else if (a[i] + a[j] == a[k])
                {
                    cout << k + 1 << " " << i+ 1 << " " << j + 1 << endl;
                    return 0;
                }
                else
                {
                    if (a[i] + a[k] == a[j])
                    {
                        cout << j + 1 << " " << i + 1 << " " << k + 1;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}