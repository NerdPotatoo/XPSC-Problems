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
    ll n,k;
    cin >> n >> k;
    ll l = k, m = k+n-1, r = k+n-1, mid, res = 1e18;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        ll leftSum = ( mid*(mid+1)/2 );
        ll rightSum = (m*(m+1)/2) - leftSum;
        leftSum -= (k*(k-1)/2);

        res = min(res,abs(leftSum-rightSum));
        if(leftSum - rightSum < 0)
        {
            l = mid + 1;
        }
        else if(leftSum - rightSum > 0)
        {
            r = mid - 1;
        }
        else break;

    }
    cout << res  << '\n';
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