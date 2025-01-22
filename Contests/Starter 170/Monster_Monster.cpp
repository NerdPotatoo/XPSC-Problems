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
    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(auto &k:a) cin >> k;
    sort(all(a));
    ll j = n-1;
    for(int i = 0; i<n-1; i++)
    {
        a[i] += (x*j);
        j--;
    }
    // for(auto k : a)
    // {
    //     cout << k << " ";
    // }
    // cout << "\n";

    cout << *max_element(all(a)) << "\n";
    // cout << mn << " " << mx << "\n";
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