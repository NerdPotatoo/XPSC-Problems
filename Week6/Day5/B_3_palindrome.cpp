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
    string a = "aa", b = "bb";
    if(n==1)
    {
        cout<<'a'<<endl;
        return;
    }

    int flg = 0, k = 0;
    if(n&1)
    {
        flg = 1;
        n--;
    }

    string ans="";
    for(int i = 1; i<=n; i += 2)
    {
        if(k==0) {
            ans += a;
            k = 1;
        }
        else {
            ans += b;
            k = 0;
        }
    }

    if(flg)
    {
        if(ans.back() == 'a') ans+="b";
        else ans+="a";
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fastIO;
    int t = 1;
    // cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}