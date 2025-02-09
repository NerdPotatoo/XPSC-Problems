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
    map<ll,ll> freq;
    int dist = 0;
    vector<int> a(n);
    for(auto &x:a) cin >> x;
    int l = 0, r = 0;
    ll res = 0;

    while(r<n)
    {
        if(freq.find(a[r]) == freq.end() || freq[a[r]] == 0)
        {
            dist++;
        }

        freq[a[r]]++;

        while(dist>k)
        {
            freq[a[l]]--;
            if(freq[a[l]] == 0)
            {
                dist--;
            }
            l++;
        }
        res += r-l+1LL;
        r++;
    }
    cout << res << '\n';
}
int32_t main()
{
    fastIO;
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}