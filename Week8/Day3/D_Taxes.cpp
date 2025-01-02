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
bool isPrime(int n)
{
    if(n%2 == 0 && n!=2) return false;
    for(int i = 3; i*i<=n; i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
void solve()
{
    // CODE HERE
    int n;
    cin >> n;

    if(isPrime(n))
    {
        cout << 1 << endl;
    }
    else if(!(n&1))
    {
        cout << 2 << endl;
    }
    else{
        if(isPrime(n-2))
        {
            cout << 2 << endl;
        }
        else cout << 3 << endl;
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