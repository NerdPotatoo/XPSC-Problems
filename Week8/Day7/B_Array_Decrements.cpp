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
    vector<int> a(n) ,  b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        if(b[i] > a[i]) 
        {
            no
            return;
        }
        v[i] = (a[i]-b[i]);
    }
    int mx = *max_element(all(v));
    for(int i = 0; i<n; i++)
    {
        if(mx > v[i] && b[i] != 0)
        {
            no
            return;
        }
    }
    yes
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