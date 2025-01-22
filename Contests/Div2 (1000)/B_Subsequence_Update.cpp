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
    int n, l, r;
    cin >> n >> l >> r; 
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    ll sum = 0;
    if(l == 1 && r == n)
    {
        for(int i = 0; i<r; i++)
        {
            sum += a[i];
        }
        cout << sum << "\n";
        return;
    }
    int m = r-l+1;
    // case one
    vector<int> v1, v2; 
    for(int i = l-1; i<n; i++)
    {
        v1.push_back(a[i]);
    }
    for(int i = 0; i<r; i++)
    {
        v2.push_back(a[i]);
    }
    sort(all(v1));
    sort(all(v2));
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i<m; i++)
    {
        sum1 += v1[i];
        sum2 += v2[i];
    }
    cout << min (sum1,sum2) << "\n";

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