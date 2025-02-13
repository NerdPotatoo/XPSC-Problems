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
const int maxN = 100009;

void solve()
{
    // CODE HERE
    map<int,int> cnt;
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;

    for(int i = 0; i<n; i++)
    {
       int m = sqrt(a[i]);
       for(int j = 2; j<=m; j++)
       {
           if(a[i]%j==0)
           {
               cnt[j]++;
               
           }
           while(a[i]%j==0)a[i]/=j;
       }
       if(a[i]>1) cnt[a[i]]++;
    }
    int res = 1;
    for(auto [x,y]:cnt)
    {
        res = max(res,y);
        // cout << x << ' ' << y << '\n';
    }
    if(cnt.size() == 0) res = 1;
    cout << res << '\n';
}
int32_t main()
{
    fastIO;
    
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}