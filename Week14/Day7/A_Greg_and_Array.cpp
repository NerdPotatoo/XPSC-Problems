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
const int maxN = 1e5+7;
void solve()
{
    // CODE HERE
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), dif(n+1), difQ(m+1);
    for(auto &e:a) cin >> e;
    vector<tuple<ll,ll,ll>> ops(m);
    for(int i = 0; i<m; i++)
    {
        ll l, r , d;
        cin >> l >> r >> d;
        ops[i] = make_tuple(l,r,d);

    }

    while(k--)
    {
        // yes
        ll l, r;
        cin >> l >> r;
        l--,r--;
        difQ[l]++;
        difQ[r+1]--;
    }
    vector<ll> pref(m+1);
    for(int i = 1; i<=m; i++)
    {
        pref[i] = pref[i-1] + difQ[i-1];
    }

    for(int i = 1; i<=m; i++)
    {

        ll l = get<0>(ops[i-1]);
        ll r = get<1>(ops[i-1]);
        ll d = get<2>(ops[i-1]);
        l--,r--;
        dif[l] += (d*pref[i]);
        dif[r+1] -= (d*pref[i]);
    }
    vector<ll> ans(n+1);
    for(int i = 1; i<=n; i++)
    {
        ans[i] = ans[i-1] + dif[i-1];
        cout << (ans[i] + a[i-1]) << ' ';
    }
    // for(int i = 0; i<n; i++)
    // {
    //     cout << dif[i] + a[i] << " ";
        
    // }
    cout << endl;

    
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