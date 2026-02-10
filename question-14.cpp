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

    int maxIndex = -1;
    int minIndex = -1;

    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxVal)
        {
            maxVal = a[i];
            maxIndex = i;
        }

        if (a[i] <= minVal)
        {
            minVal = a[i];
            minIndex = i;
        }
    }

    int result = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex)
    {
        result--;
    }
    cout << result << endl;

    return 0;
}