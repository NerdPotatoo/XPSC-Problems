#include<bits/stdc++.h>

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
    int n, mx = 0;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> v[i];
        mp[v[i]]++;
    }

    sort(all(v));
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        int x = v[i];
        if(mp[x]!=0)
        {
            ans++;
            while(mp[x]>0)
            {
                mp[x]--;
                x++;
            }
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