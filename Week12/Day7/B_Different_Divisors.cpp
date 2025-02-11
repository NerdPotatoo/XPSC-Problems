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
const int maxN = 10000009;
vector<int> allPrimes;
void seive()
{
    vector<bool> prime(maxN+1, true);
    for(int i = 2; i<=maxN; i++)
    {
        if(prime[i])
        {
            for(int j = i+i; j<=maxN; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i<=maxN; i++)
    {
        if(prime[i]) allPrimes.push_back(i);
    }
}
void solve()
{
    // CODE HERE
    int d;
    cin >> d;
    auto it = lower_bound(all(allPrimes),d+1) - allPrimes.begin();
    ll x = allPrimes[it];
    auto i = lower_bound(all(allPrimes),d+x) - allPrimes.begin();
    ll y = allPrimes[i];

    cout << min(x*x*x, x*y) << '\n';
}
int32_t main()
{
    fastIO;
    seive();
    int T = 1;
    cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}