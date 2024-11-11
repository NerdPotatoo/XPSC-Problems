#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin>>n;
    vector<pair<string,int>> tab(n);
    string s;
    for(int i = 0; i<n ; i++)
    {
        cin>>s;
        
        tab[i] = {s,0};
    }
    // for(auto [x,y] : tab)
    // {
    //     cout<<x<< " " <<y<<endl;
    // }
    int j = 1;
    map<string,int> mp;
    map<int,string> mp2;
    for(int i = n-1; i>=0; i--)
    {
        if(mp.find(tab[i].fi) == mp.end())
        {
            mp[tab[i].fi] = j;
            mp2[j] = tab[i].fi;
            j++;
        }
    }
    for(auto [x,y] : mp2)
    {
        cout<<y[y.size()-2]<<y[y.size()-1];
    }
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