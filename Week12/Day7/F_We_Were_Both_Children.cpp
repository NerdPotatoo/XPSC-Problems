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
    vector<int> occ(n+1,0), ans(n+1,0);
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x<=n)
        {
            occ[x]++;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        for(int j = i; j<=n; j+=i)
        {
            ans[j] += occ[i];
        }
    }
    cout << *max_element(all(ans)) << '\n';
    
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