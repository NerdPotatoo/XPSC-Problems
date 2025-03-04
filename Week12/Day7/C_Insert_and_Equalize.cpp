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
    vector<int> a(n);
    int x = 0;
    for(auto &e:a) {
        cin >> e;    
    }
    sort(all(a));
    int mx = a[n-1];
    ll op = 0;
    for(int i = 0; i<n; i++)
    {
        x = __gcd(x, mx-a[i]);
    }
    int last = mx-x;
    // cout << x << '\n';
    if(x==0)
    {
        cout << 1 << '\n';
        return;
    }
    for(int i = 0; i<n; i++)
    {
        op += (1LL*(mx-a[i])/x);
    }
    op++;
    for(int i = n-2; i >= 0; i--)
    {
        if(last == a[i])
        { 
            op++;
            last -= x;
        }
        
    }
    cout << op << '\n';

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