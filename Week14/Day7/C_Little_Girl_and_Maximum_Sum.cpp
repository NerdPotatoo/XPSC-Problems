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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), d(n+1);
    for(auto &x:a) cin >> x;
    while(m--)
    {
        int l,r;
        cin >> l >> r;
        l--;
        d[l]++;
        d[r]--;
    }

    for(int i = 1; i<=n; i++)
    {
        d[i] += d[i-1];
    }

    sort(allr(a));
    sort(allr(d));
    ll ans = 0;

    for(int i = 0; i<n; i++)
    {
        ans += (1LL*a[i]*d[i]);
    }
    cout << ans << '\n';
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