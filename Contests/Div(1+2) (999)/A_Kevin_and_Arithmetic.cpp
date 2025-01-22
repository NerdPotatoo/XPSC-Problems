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
    cin >> n;
    vector<int> a(n), odds, evens;
    for(auto &x:a) {
        cin >> x;
        if( x & 1)
        {
            odds.push_back(x);
        }
        else evens.push_back(x);
    }
    ll ans = 0, sum = 0;
    
    if(evens.size() > 0){
        ans++;
        while(!(evens[0]&1)) evens[0]/=2;
        sum = evens[0];
        for(int i = 1; i<evens.size(); i++)
        {
            sum += evens[i];
        }
    } 

    for(int i = 0; i<odds.size(); i++)
    {
        sum += odds[i];
        if(!(sum&1))
        {
            ans++;
            while(!(sum&1)) sum/=2;
        }
    }
    cout << ans << endl;

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