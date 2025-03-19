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
const int maxN = 2e5+13;
void solve()
{
    // CODE HERE
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> d(maxN,0), pref(maxN,0);
    for(int i = 1; i<=n; i++)
    {
        ll x,y;
        cin >> x >> y;
        d[x]++;
        d[y+1]--;

    }

    for(int i = 1; i<maxN; i++)
    {
        d[i] += d[i-1];
        if(d[i]>=k) pref[i]++;
    }

    for(int i = 1; i<maxN; i++)
    {
        pref[i] += pref[i-1];
    }

    while(q--)
    {
        int x, y;
        cin >> x >> y;
        cout << pref[y]-pref[x-1] << '\n';
    }
}
int32_t main()
{
    fastIO;
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}