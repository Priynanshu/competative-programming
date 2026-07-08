#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    long long a, b;
    cin >>a;
    cin>> b;

    long long c = a + b;
    string d = to_string(a);
    string e = to_string(b);
    string f = to_string(c);

    d.erase(remove(d.begin(), d.end(), '0'), d.end());
    e.erase(remove(e.begin(), e.end(), '0'), e.end());
    f.erase(remove(f.begin(), f.end(), '0'), f.end());

    long long newA = stoi(d);
    long long newB = stoi(e);
    long long newC = stoi(f);

    if(newA + newB == newC) {
        cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }

    return 0;
}