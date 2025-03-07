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
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= (log2(n)+1); i++)
    {
        int gap = pow(2,i);
        int nums = (n+(gap/2))/gap;
        if(k <= nums)
        {
            if(k==1) 
            {
                cout << (gap/2) << '\n';
            }
            else{
                ll ans = (gap/2LL) + ((k-1LL)*gap);
                cout << ans << '\n';
            }
            return; 
        }
        else{
            k -= nums;
        }
    }
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