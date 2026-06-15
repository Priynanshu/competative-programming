#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int totalChest = 0;
    int totalBicep = 0;
    int totalBack = 0;
    int flag = 1;

    for(int i=0; i<n; i++) {
        if(flag == 4) {
            flag = 1;
        }
        if(flag == 1) {
            totalChest += a[i];
        } else if(flag == 2) {
            totalBicep += a[i];
        } else if(flag == 3) {
            totalBack += a[i];
        }
        flag++;
    }
    if(totalChest >= totalBicep && totalChest >= totalBack) {
        cout << "chest" << endl;
    } else if(totalBicep >= totalChest && totalBicep >= totalBack) {
        cout << "biceps" << endl;
    } else {
        cout << "back" << endl;
    }

    return 0;
}