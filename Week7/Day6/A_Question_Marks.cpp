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
    int n, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'A') a++;
        else if(s[i] == 'B') b++;
        else if(s[i] == 'C') c++;
        else if(s[i] == 'D') d++;
    }

    int sum = min(a, n) + min(b, n) + min(c, n) + min(d, n);
    cout<<sum<<endl;
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