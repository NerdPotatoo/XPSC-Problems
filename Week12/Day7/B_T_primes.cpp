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
bool isPrime(ll p)
{
    if(p==1 || (p%2==0 && p!=2)) return false;
    for(ll i = 3; i*i<=p; i+=2)
    {
        if(p%i==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    // CODE HERE
    ll n;
    cin >> n;
    ll d = sqrtl(n);
    if((d*d ==n) && isPrime(d))
    {
        yes
    }
    else{
        no
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