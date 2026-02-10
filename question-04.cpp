#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            result += '0';
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            result += '1';
            i++; 
        }
        else
        {
            result += '2';
            i++;
        }
    }

    cout << result << endl;

    return 0;
}