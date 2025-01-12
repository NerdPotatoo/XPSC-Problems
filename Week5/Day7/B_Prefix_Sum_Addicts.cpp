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
    int n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for(int i = 0; i<k; i++)
    {
        cin >> a[i];
    }
    if(k == 1)
    {
        yes
        return;
    }
    vector<ll> v(n);
    int j = n-1;
    
    for(int i = k-1; i>=1; i--)
    {
        v[j] = a[i] - a[i-1];
        j--;
    }
    while(j>=0)
    {
        v[j] = v[j+1];
        a[0] -= v[j];
        j--;
    }

    v[0] += a[0];
    
    if(is_sorted(all(v))) yes
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