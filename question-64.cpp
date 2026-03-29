#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> puzzles(m);
    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    int diff = INT_MAX;

    for (int i = 0; i <= m - n; i++)
    {
        int A = puzzles[i + n - 1]; // max
        int B = puzzles[i];         // min
        diff = min(diff, A - B);
    }

    cout << diff << endl;

    return 0;
}