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
    ll gcd = 0;
    for(int i = 0; i<n;i++)
    {
        cin >> a[i];
    }
    ll mx = *max_element(all(a));

    for(int i = 0; i<n; i++)
    {
        a[i] = mx - a[i];
        gcd = __gcd(gcd,a[i]);
    }
    ll ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans += a[i]/gcd;
    }
    cout << ans << " " << gcd << "\n";
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