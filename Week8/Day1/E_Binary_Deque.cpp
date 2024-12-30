#include<bits/stdc++.h>

#define int long long
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
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if(sum < s)
    {
        cout << -1 << endl;
        return;
    }
    if(sum == s)
    {
        cout << 0 << endl;
        return;
    }

    int k = 0, l = 0, r = 0, ans = INT_MAX;

    while(r<n)
    {
        k += v[r];
        while(k>s)
        {
            k -= v[l];
            l++;
        }
        if(k == s)
        {
            ans = min(ans, n-(r-l+1));
        }
        r++;
    }

    cout << ans << endl;
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