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
vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve()
{
    // CODE HERE
    int n;
    cin >> n ;
    vector<int> a(n), ans(n);
    for(auto &x:a) cin >> x;

    map<int,vector<int>> mp;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<11; j++)
        {
            if(a[i]%allPrimes[j]==0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }
    cout << mp.size() << '\n';

    int color = 1;
    for(auto [x,y]: mp)
    {
        for(auto c:y)
        {
            ans[c] = color;
        }
        color++;
    }
    for(auto x :ans)
    {
        cout << x << ' ';
    }
    cout << '\n';
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