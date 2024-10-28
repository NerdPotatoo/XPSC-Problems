#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int n, flg;
    cin>>n;
    map<string,string> mp;
    string old, neW;
    cin >> old >> neW;
    mp[old] = neW;
    n--;
    while(n--)
    {
        cin >> old >> neW;
        flg = 1;
        for(auto [x,y] : mp)
        {
            if(old == y)
            {
                mp[x] = neW;
                flg = 0;
                break;
            }
        }   
        if(flg) mp[old] = neW;

    }
    cout<<mp.size()<<endl;
    for(auto [x,y] : mp)
    {
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}