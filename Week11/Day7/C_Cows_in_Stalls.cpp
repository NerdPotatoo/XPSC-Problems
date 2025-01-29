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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(auto &x:a) cin >> x;

    ll ans = 0;
    auto ok = [&](int mid)
    {
       ll idx = 0;
        for(int i = 1; i<k; i++)
        {
            auto tmp = lower_bound(all(a), a[idx]+mid);
            if(tmp == a.end())
            {
                return false;
            }
            else{
                idx = tmp - a.begin();
            }
        }
        return true;
    };
    ll l = 0, r = 1e9, mid;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << "\n";
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