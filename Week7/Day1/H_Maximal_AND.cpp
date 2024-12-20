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
    int n,m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    } 

    vector<int> bits(31);
    for(int i = 0; i<n; i++)
    {
        for(int k = 30; k >= 0; k--)
        {
            if((v[i] >> k) & 1){
                bits[k]++;
            }
        }
    }
    int ans = 0;
    for(int i = 30; i>=0; i--)
    {
        if(bits[i] == n)
        {
            ans += (1LL << i);
        }
        else{
            int need = n - bits[i];
            if(m >= need)
            {
                ans += (1LL << i);
                m -= need;
            }
        }
    }
    cout << ans << endl; 
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