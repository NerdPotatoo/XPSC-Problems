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
    ll n;
    cin >> n;
    deque<ll> ans;
    for(ll k = 0; k <= __lg(n); k++) // __lg() == max ON bit
    {
        if((n >> k) & 1LL)
        {
            if((n - (1LL << k))>0) ans.push_front(n - (1LL <<k));
            
            
        }
    }
    ans.push_back(n);
    cout<<ans.size()<<endl;
    for(auto val:ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;
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