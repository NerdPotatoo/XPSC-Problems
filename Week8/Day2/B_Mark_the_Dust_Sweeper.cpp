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
    vector<int> v(n);
    ll sum = 0;
    bool trigger = true;
    int idx = -1;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if(trigger && v[i]>0)
        {
            idx = i;
            trigger = false;
        }
    }
    sum -= v[n-1];
    if(idx == -1 || idx == n-1)
    {
        cout << 0 << endl;
        return ;
    }
    while(idx<n-1)
    {
        if(v[idx] == 0)
        {
            sum++;
        }
        idx++;
    }
    cout<<sum<<endl;
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