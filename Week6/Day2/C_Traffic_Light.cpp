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
    char ch;
    string s;
    cin >> n >> ch >> s;
    int i = 0, last = -1, ans = 0;
    s += s;
    n += n;
    for(int i = n-1; i>= 0; i--)
    {
        if(s[i] == 'g')
        {
            last = i;
        }
        if(s[i] == ch && last != -1)
        {
            ans = max(ans, last-i);
        }
    }
    cout<<ans<<endl;
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