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
    vector<int> a(n);

    for(auto &x:a) cin >>x;
    ll sum = 0, ans = 0;
    int l = 0, r = 0;
    while(r<n)
    {
        sum += a[r];
        if(sum == x) ans++;
        else if(sum>x)
        {
            while(l<=r && sum > x)sum -= a[l++];
            if(sum == x) ans++;
        }
        r++;
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