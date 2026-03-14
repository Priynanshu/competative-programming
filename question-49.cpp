#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> laptops;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        laptops.push_back({a,b});
    }

    sort(laptops.begin(), laptops.end());

    for(int i=0;i<n-1;i++){
        if(laptops[i].second > laptops[i+1].second){
            cout<<"Happy Alex";
            return 0;
        }
    }

    cout<<"Poor Alex";

    return 0;
}