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
    ll h,n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for(auto &x:a) cin >> x;
    for(auto &x:c) cin >> x;

    auto ok = [&](ll turn)
    {   
        ll attack = 0, damage = 0;
        for(int i = 0; i<n; i++)
        {
            attack = (turn + c[i]-1LL)/c[i];
            damage += (attack * a[i]);
            // if(damage>=h) return true;
        }
        return (damage >= h);
    };
    ll l = 1, r = 1e12, mid, res = 0;
    while(l<=r)
    {
        mid = l + (r-l)/2LL;
        if(ok(mid))
        {
            res = mid;
            r = mid - 1LL;
        }
        else{
            l = mid + 1LL;
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