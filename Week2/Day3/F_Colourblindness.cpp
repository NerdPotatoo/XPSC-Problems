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
    int n, ok = 1;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i = 0; i<n; i++)
    {
        if((s[i] == 'R' && t[i] != 'R') || (s[i] != 'R' && t[i] == 'R'))
        {
            ok = 0;
            break;
        }
    }

    if(ok) yes
    else no
}
int32_t main()
{
    fastIO;
    ll t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}