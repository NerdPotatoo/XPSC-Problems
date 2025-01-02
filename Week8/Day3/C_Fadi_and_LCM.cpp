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


int lcm(int a, int b){
     return (b / __gcd(a,b)) * a;
}

void solve()
{
    // CODE HERE
    int x;
    cin >>x;
    vector<pair<int,int>> divisors;
    for(int i = 1; i*i<=x; i++)
    {
        if(x%i==0  && lcm(i,x/i) == x)
        {
            divisors.push_back({i,x/i});
            // cout<<i << " "<<x/i;
            // return;
        }
    }
    // for(auto [a,b]:divisors)
    // {
    //     cout << a<<" "<<b<<endl;
    // }

    int n = divisors.size();
    if(n <= 1)
    {
        cout << divisors[0].fi << " "<<divisors[0].se;
    }
    else{
        cout << divisors[n-1].fi << " " << divisors[n-1].se;
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