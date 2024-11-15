#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
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
    vector<pair<int,int> > v(n+1);
    for(int i = 0; i<=n; i++)
    {
        v[i].fi = 0;
        v[i].se = i;
    }
    // for(auto [x,y] : v)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<n; j++)
        {
            int x;
            cin>>x;
            v[x].fi += j;
        }
    }
    sort(all(v));
    for(int i = 1; i<=n; i++)
    {
        cout<<v[i].se<<" ";
    }
    cout<<endl;
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