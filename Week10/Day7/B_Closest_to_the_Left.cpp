#include<bits/stdc++.h>

#define int long long
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
/*
    GCD = __gcd(x,y)
    LCM = ( x / GCD ) * y
    Leftmost setbit = __lg(x);
*/ 
using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n , q, k;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &x : a)    cin >> x;
    
    while(q--)
    {
        cin >> k;
        int l = 0, mid, r = n-1;
        int ans = -1;
        while(l <= r)
        {
            mid = (l+r)/2;

            if(k >= a[mid]) {
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid-1;
            }
        }
        
        cout << ans+1 <<endl;
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