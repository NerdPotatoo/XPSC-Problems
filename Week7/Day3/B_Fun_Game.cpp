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
    int n;
    cin >> n;
    string s, tt;
    cin >> s >> tt;

    if(s[0] == '1' || s == tt) 
    {
        yes
        return;
    }
    
    bool found = false;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '1')
        {
            found = true;
            break;
        }
        if(s[i] != tt[i])
        {
            break;
        }
    }

    if(found) yes
    else no
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