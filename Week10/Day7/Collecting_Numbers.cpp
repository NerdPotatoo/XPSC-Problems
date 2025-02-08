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
    int n; cin >> n;
    vector<int> a(n), indices(n+1);
    
    map<int,int> mp;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        indices[a[i]] = i;
    }

    indices[0] = 0;
    int cnt = 1; 
    for(int i = 1; i<n+1; i++)
    {
        if(indices[i] < indices[i-1]) cnt++;
    }
    cout << cnt << '\n';
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