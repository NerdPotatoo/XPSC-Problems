#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mod = 1e9+7;
int bits[33];
void cntOne(ll x)
{
    x++;
    for(int i = 0; i<=32; i++)
    {
        ll pos = 1LL<<i;
        ll count = x/pos;
        bits[i] += (count/2)*pos;
        if(count&1) bits[i] += x%pos;
    }
}
void solve()
{
    // CODE HERE
    ll n,m;
    cin >> n >> m;
    ll x = max(0LL, n-m);
    ll y = n+m;
    memset(bits, 0, sizeof(bits));
    cntOne(x-1);
    for(auto &b:bits) b = -b;
    cntOne(y);
    ll res = 0;
    for(int i = 0; i<33; i++)
    {
        if(bits[i]) res |= 1LL<<i;
    }
    cout << res << "\n";
}
int32_t main()
{
    fastIO;
    int T = 1;
    cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}