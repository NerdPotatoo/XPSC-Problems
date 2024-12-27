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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin >> v[i];
    
    int currMax = v[n-1], cnt = 0,ans = 0;
    for(int i = n-2 ; i>=0; i--)
    {
        if(currMax > v[i])
        {
            cnt++;
        }
        else{
            cnt = 0;
            currMax = v[i];
        }
        ans = max(ans, cnt);
    }
        cout<<ans<<endl;
    
    // cout<<idx_mn<< " " <<idx_mx<<endl;
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