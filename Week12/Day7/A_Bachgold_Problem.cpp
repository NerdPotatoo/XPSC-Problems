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
    bool odd = false;
    int range = 0;
    if(n&1) 
    {
        n -= 3;
        odd = true;
    }
    range = n/2;
    cout << ((odd)? range+1:range) << '\n';
    for(int i = 1; i<=range; i++)
    {
        cout << 2 << ' ';
    }
    if(odd) cout << 3;
}
int32_t main()
{
    fastIO;
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}