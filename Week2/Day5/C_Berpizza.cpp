#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second

#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

void solve()
{
    // CODE HERE
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    int q, i = 1, x;
    cin>>q;
    while(q--)
    {
        cin>>x;
        if(x==1)
        {
            cin>>x;
            s.insert({i,x});
            ml.insert({x,-i});
            i++;
        }
        else if(x==2)
        {
            int pos = (*s.begin()).first , cost = (*s.begin()).second;
            cout<<pos<<" ";
            s.erase({pos,cost});
            ml.erase({cost,-pos});
        }
        else{
            int cost = (*ml.rbegin()).first, pos = ((*ml.rbegin()).second) * (-1);

            cout<<pos<<" ";

            s.erase({pos,cost});
            ml.erase({cost,-pos});
        }

    }
    // for(auto [x,y]:s)
    // {
    //     cout<<x<<" , "<<y<<" \n";
    // }
    
}
int32_t main()
{
    fastIO;
    int t = 1;
    // cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}