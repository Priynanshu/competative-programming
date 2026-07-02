#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> neg, pos, zero;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x < 0)
            neg.push_back(x);
        else if (x > 0)
            pos.push_back(x);
        else
            zero.push_back(x);
    }

    vector<int> set1, set2, set3;

    // One negative goes to set1
    set1.push_back(neg.back());
    neg.pop_back();

    // If remaining negatives are odd,
    // move one to set3
    if (neg.size() % 2 == 1) {
        set3.push_back(neg.back());
        neg.pop_back();
    }

    // Remaining negatives go to set2
    for (int x : neg)
        set2.push_back(x);

    // All positives go to set2
    for (int x : pos)
        set2.push_back(x);

    // All zeros go to set3
    for (int x : zero)
        set3.push_back(x);

    cout << set1.size() << " ";
    for (int x : set1)
        cout << x << " ";
    cout << "\n";

    cout << set2.size() << " ";
    for (int x : set2)
        cout << x << " ";
    cout << "\n";

    cout << set3.size() << " ";
    for (int x : set3)
        cout << x << " ";
    cout << "\n";

    return 0;
}