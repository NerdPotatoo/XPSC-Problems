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
    ll m, a, b, c, total, ans = 0;
    cin >> m >> a >> b >> c;
    total = m*2;

    if(m>=a)
    {
        ans += a;
        total -= a;
    }
    else{
        ans += m;
        total -= m;
    }
    if(m >= b)
    {
        ans += b;
        total -= b;
    }
    else{
        ans += m;
        total -= m;
    }

    if(total >= c)
    {
        ans += c;
        total -= c;
    }
    else{
        ans += total;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}