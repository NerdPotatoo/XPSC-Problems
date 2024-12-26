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
    string s, t;
    cin >> s>>t;
    int c1 = 0, c2 = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i] == '1') c1++;
            else c2++;
        }
    }
    if(c1!=c2 || (k-c1)<0) 
    {
        no
        return;
    }
    else{
        k -= c1;
        if(k == 0) 
        {
            yes
            return;
        }
        sort(all(s));
        sort(all(t));
        c1 = 0;
        c2 = 0;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == t[i])
            {
                if(s[i] == '0') c1++;
                else c2++;
            }
        }
        if((k%2==0) || c1>1 || c2>1) yes
        else no
    }
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