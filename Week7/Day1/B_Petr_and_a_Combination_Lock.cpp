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
    vector<int> deg(n);
    for(int i = 0; i<n ; i++)
    {
        cin >> deg[i];
    }


    for(int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for(int k = 0; k<n; k++)
        {
            if((mask >> k)&1)
            {
                sum += deg[k];
            }
            else{
                sum -= deg[k];
            }
        }

        if(sum == 0 || sum % 360 == 0) {
            yes
            return;
        }
    }
    no
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