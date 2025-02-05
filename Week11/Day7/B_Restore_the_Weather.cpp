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
    vector<pair<int,int>> a(n);
    vector<int> b(n),c(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    for(auto &x:b) cin >> x;

    sort(all(a));
    sort(all(b));
    for(int i = 0; i<n; i++)
    {
        c[a[i].second] = b[i];
    }
    for(auto x:c) cout << x << " ";
    cout << '\n';
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