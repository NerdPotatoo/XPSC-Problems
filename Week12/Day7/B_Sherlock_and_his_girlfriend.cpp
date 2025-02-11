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
const int maxN = 100009;
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
    vector<int> ans;
    int n;
    cin >> n;
    for(int i = 2; i<=n+1; i++)
    {
        if(find(all(allPrimes),i)!=allPrimes.end()) ans.push_back(1);
        else ans.push_back(2);
    }

    
        set<int> s(all(ans));
        cout << s.size() << '\n';
        for(auto x:ans)
        {
            cout << x << ' ';
        }
        cout << '\n';
    
}
int32_t main()
{
    fastIO;
    seive();
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}