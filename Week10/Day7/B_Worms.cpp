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
    int n ;
    cin >> n;
    vector<ll> worms(n);
    for(int  i = 0; i<n; i++)
    {
        cin >> worms[i];
        if(i>0){
            worms[i] += worms[i-1];
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int to_find;

        cin >> to_find;
        int ans = lower_bound(all(worms),to_find) - worms.begin();
        cout << ans + 1 << endl;
    }
    // for(auto x: worms) cout << x << " ";
    // cout << endl;
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