#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int countUpperCase = 0;
    int countLowerCase = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            countUpperCase++;
        } else {
            countLowerCase++;
        }
    }
    
    string result = s;

    if(countUpperCase > countLowerCase) {
       transform(s.begin(), s.end(), s.begin(), ::toupper);
        result = s;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        result = s;
    }

    cout<<result<<endl;

    return 0;
}