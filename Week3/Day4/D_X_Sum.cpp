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


ll calc(int i, int j, int ix, int ij)
{
    
}
void solve()
{
    // CODE HERE
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i<n;i++)
    {
        for(int j =0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }


    ll sum = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            ll curr = 1LL * arr[i][j];
            int ix = i + 1;
            int iy = j + 1;
            while(ix<n && iy<m) curr += arr[ix++][iy++];
            ix = i-1;
            iy = j+1;
            while(ix>=0 && iy<m) curr += arr[ix--][iy++];
            ix = i-1;
            iy = j-1;
            while(ix>=0 && iy>=0) curr += arr[ix--][iy--];
            ix = i+1;
            iy = j-1;
            while(ix<n && iy>=0) curr += arr[ix++][iy--];
            sum = max(curr,sum);
            curr = 0;
        }
    }
    cout<<sum<<endl;
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