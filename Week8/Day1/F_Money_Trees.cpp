#include<bits/stdc++.h>
#define inr long long
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> h[i];

    int x = h[0],l = 0, r = 0, sum = 0, ans = 0;

    while(r<n)
    {
        while(r<n && x%h[r] == 0)
        {
            x = h[r];
            sum += a[r];
            while(sum > k && l<r)
            {
                sum -= a[l];
                l++;
            }
            if(sum <= k)
            {
                ans = max(ans, r-l+1);
            }
            r++;
        }
        x = h[r];
        while(l<r)
        {
            sum -= a[l];
            l++;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}