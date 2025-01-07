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
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    sort(all(v));

    int q; cin >> q;
    int L, R;
    while(q--)
    {
        cin >> L >> R;
        auto lw = lower_bound(all(v),L)-v.begin();
        auto up = upper_bound(all(v),R)-v.begin();

        cout << up - lw << " ";

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