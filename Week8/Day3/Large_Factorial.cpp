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
const int MOD = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    int fact = 1;
    for(int i = 2; i<=n; i++)
    {
        fact = (1LL * fact % MOD * i % MOD) % MOD;
    }
    
    cout << fact << endl;
}
int32_t main()
{
    fastIO;
    int T = 1;
    cin >> T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}