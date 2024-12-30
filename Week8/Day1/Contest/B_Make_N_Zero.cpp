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
int dp[10004];
bool check(int n)
{
    if(n == 0) return true;
    if(n<=0) return false;
    if(dp[n]!=0)
    {
        return dp[n];
    }
    return dp[n] = check(n-3) | check(n-4);
}
void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    if(check(n)) yes
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