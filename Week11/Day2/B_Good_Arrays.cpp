#include<bits/stdc++.h>
using namespace std;

#define int long long
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

const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n, x, sum = 0;
    cin >> n;
    int countOne = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        sum += x;
        if(x == 1) countOne++;
    }
    if(n == 1) {
        no
        return;
    }
    sum -= n;
    if(sum >= countOne) yes
    else no

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