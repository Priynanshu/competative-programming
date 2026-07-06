#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char> > arr(n+1, vector<char>(m+1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '.')
            {
                if ((i + j) % 2 != 0)
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}