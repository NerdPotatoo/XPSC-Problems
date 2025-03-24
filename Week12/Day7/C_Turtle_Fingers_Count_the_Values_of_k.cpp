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

vector<ll> divisors(ll n)
{
    vector<ll> k;
    for(ll i = 1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            k.push_back(i);
            if(n/i != i) k.push_back(n/i);
        }
    }
    return k;
}
void solve()
{
    // CODE HERE
    ll a, b, l, tmp, cnt = 0;
    cin >> a >> b >> l;

    vector<ll> k = divisors(l);
    vector<ll> x, y;

    for(ll i = 0; i<=20; i++)
    {
        tmp = powl(a,i);
        if(tmp<=1e6)
        {
            x.push_back(tmp);
        }
        else{
            break;
        }
    }
    for(ll i = 0; i<=20; i++)
    {
        tmp = powl(b,i);
        if(tmp<=1e6)
        {
            y.push_back(tmp);
        }
        else{
            break;
        }
    }
  
    cnt = 0;

    for(int i = 0; i<k.size(); i++)
    {
        int ok = 0;
        for(int j = 0; j<x.size(); j++)
        {
            for(int r = 0; r<y.size(); r++)
            {
                if((k[i] * x[j] * y[r] ) == l)
                {
                    cnt++;
                    ok = 1;
                    break;
                }
            }
            if(ok) break;
        }
    }
    cout << cnt << '\n';
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