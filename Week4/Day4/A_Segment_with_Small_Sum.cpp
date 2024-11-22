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
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0; i<n ; i++) cin >> v[i];
    int l = 0, r = 0, ans = 0;
    ll sum = 0;
    while(r<n)
    {
        sum += v[r];
        if(sum<=k)
        {
            ans = max(ans, r-l+1);
        }
        else{
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
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