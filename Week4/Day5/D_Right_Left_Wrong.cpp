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
    cin>>n;
    vector<ll> v(n), pref(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    string s;
    cin >> s;
    pref[0] = v[0];
    for(int i = 1; i<n; i++) pref[i] += pref[i-1]+v[i];
    int l = 0, r = n-1;
    ll sum = 0;
    while(l<r)
    {
        if(s[l] == 'L' && s[r] == 'R')
        {
            if(l>0) sum += (pref[r] - pref[l-1]);
            else sum += pref[r];
            l++,r--;
        }
        if(s[l] == 'R')l++;
        if(s[r] == 'L') r--;
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