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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(auto &x : v)    cin >> x;
    // cout << v[0];
    while(q--)
    {
        int k;
        cin >> k;

        int mid, l = 0, r = n-1,ok = 0;
        while(l<=r)
        {
            mid = (l+r)/2;

            if( k == v[mid])
            {
                ok = 1;
                break;
            }
            else if( k > v[mid])
            {
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        if(ok) yes
        else no
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