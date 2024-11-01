#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second

#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

void solve()
{
    // CODE HERE
    int n;
    cin>>n;
    string s,r ,tmp;
    vector<int> frq(26, 0);
    cin>>s;
    for(int i = 0; i<s.size(); i++)
    {
        frq[s[i]-'a']++;
        if(frq[s[i]-'a'] == 1){
            r.push_back(s[i]);
        }
    }
    sort(all(r));
    map<char,char> mp;
    int sz = r.size();
    for(int i = 0; i<=sz/2; i++)
    {
        mp[r[i]] = r[sz-1-i];
        mp[r[sz-1-i]] = r[i];
    }
    // for(auto [x,y] : mp)
    // {
    //     cout<<x<<" "<<y<<endl;
    // }
    for(int i = 0; i<n; i++)
    {
        s[i] = mp[s[i]];
    }
    cout<<s<<endl;
}
int32_t main()
{
    fastIO;
    ll t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}