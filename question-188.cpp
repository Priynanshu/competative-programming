#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool lastFlag = false;
    int countFirst = 0;
    int firstPoint = 0;
    int countSecond = 0;
    int secondPoint = 0;

    vector<int> first;
    vector<int> second;

    while(n--) {
        int a;
        cin >> a;

        if(a > 0) {
            lastFlag = false;
            countFirst++;
            firstPoint += a;
            first.push_back(a);              // added
        } else {
            lastFlag = true;
            countSecond++;
            secondPoint += a;
            second.push_back(abs(a));        // added
        }
    }

    if(firstPoint > abs(secondPoint)) {
        cout << "first" << endl;
    }
    else if(firstPoint < abs(secondPoint)) {
        cout << "second" << endl;
    }
    else if(first > second) {                // changed
        cout << "first" << endl;
    }
    else if(first < second) {                // changed
        cout << "second" << endl;
    }
    else {
        if(lastFlag == false) {
            cout << "first" << endl;
        } else {
            cout << "second" << endl;
        }
    }

    return 0;
}