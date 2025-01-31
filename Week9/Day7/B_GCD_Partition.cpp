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
    vector<ll> a(n), prefix(n);
    ll sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        if(i==0)
        {
            prefix[i] = a[i];
        }
        else{
            prefix[i] = prefix[i-1]+a[i];
        }
        sum += a[i];
    }

    // for(auto x:prefix)
    // {
    //     cout << x << " ";
    // }
    // cout << '\n';
    ll ans = 1;
    for(int i = 0; i<n-1;i++)
    {
        ans = max( ans , __gcd( prefix[i] , sum - prefix[i] ));
    }
    cout << ans<< "\n";
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