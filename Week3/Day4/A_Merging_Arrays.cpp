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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n+m);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<m; i++) cin >> b[i];
    a.push_back(INT_MAX);
    b.push_back(INT_MAX);
    int l = 0, r = 0, k = 0;
    while(l<n || r<m)
    {
        if(a[l]<b[r])
        {
            c[k] = a[l];
            k++,l++;
        }
        else
        {
            c[k] = b[r];
            k++,r++;
        
        }
        
    }
    for(auto x:c)
    {
        cout<<x<<" ";
    }
}
int32_t main()
{
    fastIO;
    int t = 1;
    // cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}