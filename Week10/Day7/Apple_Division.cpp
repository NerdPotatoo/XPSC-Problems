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
    vector<int>a(n);
    for( auto &x:a) cin >>x;
    ll ans = INT_MAX;
    for(int mask = 0; mask < (1<<n); mask++)
    {
        ll cnt1 = 0, cnt2 = 0;
        for(int i = 0; i<n; i++)
        {
            if(mask & (1<<i)) cnt1+=a[i];
            else cnt2 += a[i];
        }
        ans = min(ans,abs(cnt1-cnt2));
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