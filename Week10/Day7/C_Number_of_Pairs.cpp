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
    int n, l , r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));

    ll ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans += upper_bound(all(a), r-a[i]) - a.begin();
        ans -= lower_bound(all(a), l-a[i]) - a.begin();

        if(l <= a[i]*2 && 2*a[i] <= r)
        {
            ans--;
        }
    }
    
    cout << ans/2 <<endl;
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