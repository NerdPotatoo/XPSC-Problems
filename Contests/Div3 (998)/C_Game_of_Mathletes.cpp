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
    int n, k, x;
    cin >> n >> k;
    map<int,int> mp;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        mp[x]++;
    }

    int score = 0;
    for(auto [x,y] : mp)
    {
        // cout << x << " " << y <<endl;
        if(mp.find(k-x) != mp.end())
        {
            int tmp = min(y,mp[k-x]);
            if(k-x == x) score += tmp/2; 
            else score += tmp;
            mp[k-x] -= tmp;
            // if(mp[k-x] <= 0) mp.erase(k-x);
            mp[x] -= tmp;
            // if(mp[x]<=0) mp.erase(x);
        }
    }
    // while(!mp.empty())
    // {
    //     int fi = (*mp.begin()).first;
    //     if(mp.find(k-fi) != mp.end())
    //     {
    //         int tmp =  min(mp[k-fi],mp[fi]);
    //         score += tmp;
    //         mp[k-fi] -= tmp;
    //         mp[fi] -= tmp;
    //         if(mp[k-fi] <= 0) mp.erase(mp[k-fi]);
            
    //     }
        
    //         mp.erase(mp[fi]);
    // }
    cout << score << endl;
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