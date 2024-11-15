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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    ll ans = 0;

    while(l<n && r<m)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;

        while(l<n && a[l] == curr)
        {
            cnt1++, l++;
        }
        while(r<m && curr>b[r]) r++;
        while(r<m && b[r] == curr)
        {
            cnt2++, r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
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