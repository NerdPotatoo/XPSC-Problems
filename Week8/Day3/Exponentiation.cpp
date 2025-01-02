#include<bits/stdc++.h>
using namespace std;

#define   int      long long
#define   ll       long long
#define   llu      long long unsigned
#define   ld       long double
#define   endl     '\n'
#define   all(x)   x.begin(), x.end()
#define   allr(x)  x.rbegin(), x.rend()
#define   yes      cout << "YES" << endl;
#define   no       cout << "NO" << endl;
#define   fi       first
#define   se       second
#define   fastIO   ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*
    GCD = __gcd(x,y)
    LCM = ( x / GCD ) * y
    Leftmost setbit = __lg(x);
*/ 
const int MOD = 1e9+7;

// Binary Exponentiation
int binpow(int a, int b)
{
    int res = 1 % MOD;
    while(b>0)
    {
        if(b&1)
        {
            res = ((res % MOD) * (a % MOD))%MOD;
        }
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
void solve()
{
    // CODE HERE
    int a,b;
    cin >> a >> b;
    cout <<binpow(a,b)<<endl;    
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