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
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1);
    for(int i = 1; i<=n; i++)
    {
        cin >> a[i];
    }

    int cnt = 0;

    for(int i = 1; i<=n; i++)
    {
        int dif = abs(i-a[i]);
        if(dif%k!=0) cnt++;
    }

    if(cnt == 0) cout << 0 << endl;
    else if(cnt == 2) cout << 1 << endl;
    else cout << -1 << endl;

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