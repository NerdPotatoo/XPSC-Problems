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
    multiset<pair<int,int>>  s;
    int x,y;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        s.insert({x,1});
        s.insert({y,-1});
    }

    int res = 0, sum = 0;
    for(auto [p,q]:s)
    {
        sum += q;
        res = max(res,sum);
    }
    cout << res << '\n';
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