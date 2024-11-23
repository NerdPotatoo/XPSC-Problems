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
    ll n, k, q, cnt = 0;
    cin >> n >> k >> q;
    vector<ll> temp(n), v;
    multiset<ll> ml;
    for(int i = 0; i<n; i++) cin >>temp[i];

    int l = 0, r = 0;
    while(r<n)
    {
        ml.insert(temp[r]);
        if(r-l+1<k)
        {
            r++;
        }
        else{
            ll mx = *ml.rbegin();
            if(mx<=q)
            {
                cnt++;
            }
            else{
                v.push_back(cnt);
                cnt = 0;
            }
            ml.erase(ml.find(temp[l]));
            l++, r++;
        }
        
    }
    ll ans = 0;
    v.push_back(cnt);
    for(auto x:v)
    {
        ans += ((x+1)*x)/2;
    }
    cout<<ans<<endl;
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