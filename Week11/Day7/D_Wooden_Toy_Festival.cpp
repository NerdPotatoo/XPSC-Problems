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
    int n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x:a) cin >> x;

    sort(all(a));

    auto ok = [&](ll mid)
    {
        int cnt = 1, l = 0;
        for(int r = 0; r<n; r++)
        {
            if(a[r]-a[l] > 2*mid)
            {
                cnt++;
                l = r;                
            }
        }
        return cnt <= 3;

    };
    int l = 0, r = 1e9, mid, ans = 0;

    while(l <= r)
    {
        mid = l + (r-l) / 2;

        if(ok(mid))
        {
            ans = mid;
            r= mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << '\n';
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