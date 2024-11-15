#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
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
    int n, m, h, x;
    cin>>n>>m>>h;
    
    vector<ll> a(n), b(m);
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(allr(a));
    sort(allr(b));
    ll ans = 0;
    int sz = min(n,m);
    for(int i = 0; i<sz; i++)
    {
        ans += min(b[i]*h, a[i]);
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fastIO;
    ll t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}