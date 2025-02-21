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
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    map<tuple<int,int,int>,int> cnt;
    ll res = 0;

    for(int i = 0; i<n-2; i++)
    {
        tuple<int,int,int> triple = {a[i],a[i+1],a[i+2]};
        vector<tuple<int,int,int>> m(3);
        m[0] = {0,a[i+1],a[i+2]};
        m[1] = {a[i],0,a[i+2]};
        m[2] = {a[i],a[i+1],0};

        for(auto &trip:m)
        {
            res += cnt[trip]-cnt[triple];
            cnt[trip]++;
        }
        cnt[triple]++;
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