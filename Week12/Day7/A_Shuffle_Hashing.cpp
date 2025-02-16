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
    string p,h;
    cin >> p >> h;
    map<char,int> org;
    for(auto c:p)
    {
        org[c]++;
    }
    if(h.size()<p.size())
    {
        no
        return;
    }
    bool ok = false;
    for(int i = 0; i<=h.size()-p.size(); i++)
    {
        string s = h.substr(i,p.size());
        map<char,int> tmp;
        for(auto c:s)
        {
            tmp[c]++;
        }
        for(auto [c,v]:org)
        {
            tmp[c] -= v;
            if(tmp[c]<=0) tmp.erase(c);
        }
        if(tmp.empty())
        {
            ok = true;
            break;
        }

    }

    if(ok) yes
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