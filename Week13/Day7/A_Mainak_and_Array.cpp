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
    int mx = 0 , mn = INT_MAX;

    vector<int> a(n);
    for(int &x:a)
    {
        cin >> x;
        mx = max(mx,x);
        mn = min(mn,x);
    }

    if(a[n-1] == mx || a[0] == mn)
    {
        cout << mx - mn << '\n';
        return;
    }
    int res = a[n-1]-a[0];
    for(int i = 0; i<n-1; i++)
    {
        res = max(res, a[i] - a[i+1]);
    }
    for(int i = 0; i<n-1; i++)
    {
        res = max(res, a[n-1] - a[i]);
    }
    for(int i = 1; i<n; i++)
    {
        res = max(res, a[i] - a[0]);
    }

    cout << res << '\n';

    
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