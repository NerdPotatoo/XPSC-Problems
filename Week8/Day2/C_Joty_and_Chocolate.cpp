#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    ll n, a, b, p, q, ans = 0;
    cin >> n >> a >> b >> p >> q;
    ll cnt1 = n/a;
    ll cnt2 = n/b;
    ll LCM = (a / __gcd(a,b)) * b;
    ll extra = n/LCM;
    ans = (cnt1 * p) + (cnt2 * q) - (extra * min(p,q));
    cout << ans << endl;
}
int32_t main()
{
    fastIO;
    int t = 1;
    // cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}