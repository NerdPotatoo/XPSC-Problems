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
    int n, m, x;
    cin >> n >> m;
    map<int,int> mp;
    map<int,vector<int>> mp2;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=m; j++)
        {
            cin >> x;
            mp[x] = i;
            mp2[i].push_back(x);
        }
    }

    if(m==1)
    {
        for(auto [x,y] : mp)
        {
            cout << y << " ";
        }
        cout << endl;
        return;
    }
    bool ok = false;
    for(auto [x,y] : mp2)
    {
        sort(all(y));
        for(int i = 0; i<y.size()-1; i++)
        {
            if(abs(y[i] - y[i+1]) != n)
            {
                ok = true;
                break;
            }
        }
    }
    if(ok)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    set<int> check;
    for(auto [x,y] : mp)
    {
        // cout << y << " ";
        if(check.find(y) == check.end())
        {
            ans.push_back(y);
            check.insert(y);
        }
    }
    for(auto x:ans)
    {
        cout << x << " ";
    }
    cout << endl;
        
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