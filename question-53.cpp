#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        string words;
    cin>>words;

    int size = words.size();
    int i = 0;
    int j = size-1;
    
    if(size > 10) {
        cout<<words[i]<<size-2<<words[j]<<endl;
    } else {
        cout<<words<<endl;
    }
    }
    return 0;
}