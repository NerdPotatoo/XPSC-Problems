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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> army(m);
    for(int i = 0; i<m; i++)
    {
        cin >> army[i];
    }

    int fedor;
    cin >> fedor;

    int cnt = 0;


    // for(int i = 0; i<m; i++)
    // {
    //     for(int j = n-1; j>=0; j--)
    //     {
    //         if((army[i] >> j) & 1) cout<<1<<" ";
    //         else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i = 0; i<m; i++)
    {
        int dif_bit = 0;
        for(int j = 0; j<n; j++)
        {
            int curr_frnd = (army[i] >> j)&1;
            int curr_fedor = (fedor >> j)&1;
            if(curr_fedor != curr_frnd)
            {
                dif_bit++;
            }
        }

        if(dif_bit<=k)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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