#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
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
    int w,d,l;
    cin>>w>>d>>l;

    float myPoint = w + (0.5*d);
    float oppPoint = l + (0.5*d);
    float pointleft = 4 - (myPoint+oppPoint);

    if(myPoint+pointleft > oppPoint) cout<<"Yes\n";
    else cout<<"No\n";
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