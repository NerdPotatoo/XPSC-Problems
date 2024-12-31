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
    vector<ll> odds, evens;
    int x;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        if(x&1) odds.push_back(x);
        else evens.push_back(x);
    }
    if(odds.size() == 0 || evens.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    sort(all(odds));
    sort(all(evens));

    ll count = evens.size(), curr = odds.back();
    for(int i = 0; i<evens.size(); i++)
    {
        if(curr > evens[i])
        {
            curr += evens[i];
        }
        else{
            count++;
            break;
        }
        
    }
    cout<<count<<endl;
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