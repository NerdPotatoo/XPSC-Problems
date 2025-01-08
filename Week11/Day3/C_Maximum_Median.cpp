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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &e : a) cin >> e;
    sort(all(a));

    // for(auto e : a) cout << e << " ";
    // cout << endl;

    // O(n/2 * log(2e9)) == O(n)  (almost)
    auto ok = [&](int median)
    {
        ll count = 0;

        for(int i = n/2; i<n; i++)
        {
           count += (a[i] < median? (median - a[i]):0);
        }
        return count <= k;
    };

    int l = 1, r = 2e9, mid, ans = 0;
    while (l<=r)
    {
        mid = l + (r - l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
    
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