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
    for(auto &e:a) cin >> e;
    sort(all(a));

    int idx = -1;
    vector<int> b;
    for(int i = 1; i<n; i++)
    {
        if(a[0] % a[i] != 0 )
        {
            // yes
            b.push_back(a[0]%a[i]);
        }
        if(a[i]%a[0] != 0)
        {
            b.push_back(a[i]%a[0]);
        }
    }
    sort(all(b));
    if(b.size() == 0) no
    else if(b[0]<a[1]) yes
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