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
    ll n;
    cin >> n;
    ll l = 0, r = 1e10, mid, res = 0;
    while(l<=r)
    {
        mid = l + (r-l)/2;

        if((mid*(mid-1LL)/2LL) >= n)
        {
            res = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    // cout << res << '\n'; 
    res--;
    if(((res*(res+1LL))/2LL) == n)
        cout << res+1LL << '\n';
    else{
        res--;
        ll ans = res + (n - ((res*(res+1LL))/2LL));
        cout << ans+1LL << '\n';
    }
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