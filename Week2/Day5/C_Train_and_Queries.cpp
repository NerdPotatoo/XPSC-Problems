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
    int n, q, x;
    cin>>n>>q;
    map<int, set<int>> mp;
    for(int i = 0; i<n; i++)
   {
       cin >> x;
       mp[x].insert(i);
   }
    while(q--)
    {
        int a, b;
        cin >> a >> b;
        if((mp.find(a) != mp.end()) && (mp.find(b)  != mp.end()))
        {
            auto st = mp[a].begin();
            auto ed = mp[b].rbegin();
            if(*st < *ed) yes
            else no
        }
        else no
    }
}
int32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}