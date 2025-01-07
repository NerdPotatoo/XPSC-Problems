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
    vector<int> a(n);
    for(auto &x:a) cin >> x;

    sort(all(a));
    int q;
    cin >> q;
    while(q--)
    {
        int x; cin >> x;
        int ans = -1, l = 0, r = n-1, m;
        bool ok = false;
        while(l<=r)
        {
            m = l + ( r - l )/2;

            if( a[m] <= x )
            {
                ans = m;
                l = m + 1;
                
            }
            else {
                r = m - 1;
            }
        }
        cout << ans + 1 << endl;
    }
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