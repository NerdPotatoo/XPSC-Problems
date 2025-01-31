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
    map<int,int> mp;
    int mx = 0, x;
    for(int i = 1; i<=n; i++)
    {
        cin >> x;
        mp[x] = i;
    }

    for(auto [a,b] : mp)
    {
        for(auto [x,y] : mp)
        {
            if( __gcd(x,a) == 1 )
            {
                mx = max(mx, (y+b));
            }
        }
    }
    if(mx) cout << mx << "\n";
    else cout << -1 << "\n";
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