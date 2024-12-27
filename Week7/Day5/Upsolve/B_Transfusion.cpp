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
    ll sum_e = 0;
    ll sum_o = 0;

    for(int i = 1; i<=n; i++)
    {
        int x;
        cin >>x;
        if(i&1)
        {
            sum_o += x;
        }
        else{
            sum_e += x;
        }
    }


    ll o = n - (n/2);
    ll e = n/2;

    if((sum_e % e != 0) || (sum_o % o != 0))
    {
        no
        return;
    }

    if((sum_e/e) == (sum_o/o)) 
        yes
    else
        no
    
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