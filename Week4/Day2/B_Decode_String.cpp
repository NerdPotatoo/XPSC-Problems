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
    string s, ans;

    cin>>n>>s;
    char c;
    for(int i = n-1; i>=0; i--)
    {
        if( i>0 && s[i] == '0')
        {
            int ch = (s[i-2] - '0') * 10 + (s[i-1]-'0');
            c = char(ch-1 +'a');
            i-=2;
        }
        else{
            c = char((s[i]-'0')-1+'a');
        }

        // cout<<c<<endl;
        ans.push_back(c);
    }
    reverse(all(ans));
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