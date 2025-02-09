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
    ll ans = 0;
    for(auto &x:a) cin >>x;
    ll prefixSum = 0;
    map<ll,int> cnt;
    cnt[0] = 1;
    for(int i = 0; i<n; i++)
    {
        prefixSum += a[i];
        ans += (cnt[prefixSum-k]);
        cnt[prefixSum] += 1;
    }
    
    cout << ans << "\n";
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