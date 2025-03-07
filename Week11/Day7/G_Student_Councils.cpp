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

void solve()
{
    // CODE HERE
    int k, n;
    cin >> k >> n;
    vector<ll> a(n);
    ll tot = 0;
    for(auto &x:a) {
        cin >> x;
        tot += x;
    }   

    auto ok  = [&](ll x)
    {
        ll need = x*k;
        for(auto e:a)
        {
            need -= min(x,e);
        }
        return need<=0;
    };

    ll l = 0, r = (tot/k)+10, m, res = 0;
    while(l<=r)
    {
        m = l + (r-l)/2;
        if(ok(m))
        {
            res = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << res << '\n';
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