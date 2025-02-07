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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int m = 0;
    bool S = false, P = false;
    if(s[0] == 's') s[0] = '.';
    if(s[n-1] == 'p') s[n-1] = '.';
    for(int i = 0; i<n; i++)
    {
        if(s[i] == 's')
        {
            S = true;
        }
        else if(s[i] == 'p')
        {
            P = true;
        }
    }
    if(S&&P) no
    else yes
}
int32_t main()
{
    fastIO;
    int T = 1;
    cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}