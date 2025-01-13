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
    vector<int> v(64);
    int x;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        v[__lg(x)]++;
    }

    ll ans = 0;
    for(int i = 0; i<32; i++)
    {
        if(v[i] > 1)
        {
            ans += (1LL * (v[i] - 1)*v[i])/2;
            
        }
    }
    cout << ans << endl;
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