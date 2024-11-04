#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second

#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

void solve()
{
    // CODE HERE
    int n, q;
    cin>>n>>q;
    vector<int> v(n), cnt(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    
    set<int> s;
    for(int i = n-1; i>=0; i--)
    {
        s.insert(v[i]);
        cnt[i] = s.size();
    }
    
  
    while(q--)
    {
        int x;
        cin>>x;
        cout<<cnt[--x]<<endl;
    }
}
int32_t main()
{
    fastIO;
    ll t = 1;
    // cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}