#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin>>a >> b;

    int FirstWin = 0;
    int Draw = 0;
    int SecondWin = 0;

    for(int i=1; i<=6; i++) {
        if(abs(a - i) < abs(b - i)) {
            FirstWin++;
        }
        if(abs(a - i) == abs(b - i)) {
            Draw++;
        }
        if(abs(a - i) > abs(b - i)) {
            SecondWin++;
        }
    }
    cout<<FirstWin<<" "<<Draw<<" "<<SecondWin<<endl;
    return 0;
}
