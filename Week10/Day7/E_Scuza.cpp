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
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), b, prefixSum;
    prefixSum.push_back(0);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        prefixSum.push_back(prefixSum.back()+a[i]);
        if(i == 0)
        {
            b.push_back(a[i]);
        }
        else{
            b.push_back(max(a[i],b.back()));
        }
    }
    int x;
    for(int i = 0; i<q; i++)
    {
        cin >> x;
        int idx = upper_bound(all(b),x)-b.begin();
        cout << prefixSum[idx] <<" ";
    }
    cout << "\n";
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