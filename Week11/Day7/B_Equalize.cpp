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
    set<int> s;
    int x;

    for(int i = 0; i<n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    vector<int> a(all(s));
    int res = 0;
    int l = 0, r = 0;
    while(r<a.size())
    {
        if(a[r]-a[l]>=n)
        {
            l++;
        }
        res = max(res, r-l+1);
        r++;
    }
    cout << res << '\n';
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