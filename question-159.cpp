#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int n = 0;
    int i = 0;
    int e = 0;
    int t = 0;

    for(char ch : s) {
        if(ch == 'n') n++;
        if(ch == 'i') i++;
        if(ch == 'e') e++;
        if(ch == 't') t++;
    }

    cout << min({(n - 1) / 2, i, e / 3, t}) << endl;

    return 0;
}