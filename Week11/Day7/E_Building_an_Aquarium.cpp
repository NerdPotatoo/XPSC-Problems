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
    ll n, w;
    cin >> n >> w;
    vector<ll> a(n);
    for(ll &x:a) cin >> x;
    ll l = 1, r = 1e18, mid, res = 1e18;
    auto ok = [&](ll m)
    {
        ll sum = 0;
        for(ll x:a)
        {
            sum += max(mid-x,0LL);
            if(sum>w) return false;
        }
        if(sum <= w) return true;
        else return false;
    };
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            res = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << res << '\n';
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