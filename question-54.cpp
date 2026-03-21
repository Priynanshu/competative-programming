#include <bits/stdc++.h>
using namespace std;


bool vowelCheck(char ch) {
    string vowels = "aeiouy";
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        for(int i=0; i<vowels.size(); i++) {
            if(ch == vowels[i]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string word;
    cin>>word;

    string result = "";

    for(int i=0; i<word.size(); i++) {
        char lowerCh = tolower(word[i]);
        
        if(!vowelCheck(lowerCh)) {
            result.append(".");
            result.push_back(lowerCh);
        }
    }
    cout<<result<<endl;
    return 0;
}