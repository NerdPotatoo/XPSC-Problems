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
    string s, tt;
    cin >> s >> tt;

    int a_s = 0, a_tt = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 'a') a_s++;
    }
    for(int i = 0; i<m; i++)
    {
        if(tt[i] == 'a') a_tt++;
    }

    if(a_s != a_tt) {
        cout<<"No\n";
        return;
    }
    int b_s = 0, b_tt = 0;
    int i = 0;
    while(i < n && s[i]!='a'){
        b_s++;
        i++;
    }
    i = 0;
    while(i < m && tt[i]!='a'){
        b_tt++;
        i++;
    }

    if(b_s == b_tt) cout<<"Yes\n";
    else cout<<"No\n";
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