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
    ll count = 2;
    for(int i = 2; i*i<=n; i++)
    {
        if((n%i) == 0)
        {
            if( i == (n/i) ) count++;
            else count += 2;
        }
    }
    if(n==1) cout << 1 << '\n';
    else cout << count << '\n';
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