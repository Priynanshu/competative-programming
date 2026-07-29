#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int n = s.size();
    
    if(s[n-2] == 'A' || s[n-2] == 'a' || s[n-2] == 'E' || s[n-2] == 'e' || s[n-2] == 'I' || s[n-2] == 'i' || s[n-2] == 'O' || s[n-2] == 'o' || s[n-2] == 'U' || s[n-2] == 'u' || s[n-2] == 'Y' || s[n-2] == 'y') {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

    return 0;
}