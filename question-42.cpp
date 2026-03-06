#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int need = n - 10;

    if (need < 1 || need > 11)
        cout << 0;
    else if (need == 10)
        cout << 15;
    else
        cout << 4;

    return 0;
}