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
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    map<ll,set<int>> mp;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        mp[a[i]].insert(i);
    }
    set<int> ans;
    bool ok = false;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i!=j)
            {
                auto it = mp.find(x-(a[i]+a[j]));
                // cout << i<< " " << j << " " << it->first << '\n';
                if(it != mp.end()  )
                {
                    set<int> indices(it->second.begin(),it->second.end());
                    if(indices.find(i) != indices.end()) indices.erase(i);
                    if(indices.find(j) != indices.end()) indices.erase(j);
                    ok = true;
                    ans.insert(i+1);
                    ans.insert(j+1);
                    ans.insert(*indices.begin()+1);
                    break;
                }
            }
        }
        if(ok) break;
    }
    if(ok && ans.size() == 3)
    {
        for(auto x:ans)
        {
            cout << x << " ";
        }
        cout << '\n';
    }
    else {
         cout << "IMPOSSIBLE\n";
    }
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