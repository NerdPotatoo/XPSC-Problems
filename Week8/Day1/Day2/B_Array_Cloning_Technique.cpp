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

    Divisibility rule 9: 
    to check if a number X is divisible by 9 or not.
    sum of all digits of X must be divisible by 9
    
*/ 

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    vector<int> v(n);
    bool ok = true;
    map<int,int> mp;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        if(i>0 && v[i-1]!=v[i])
        {
            ok = false;
        }
    }
    if( n == 1 || ok)
    {
        cout << 0 << endl;
        return;
    }

    int occ  = 0;
    for(auto [x,y] : mp)
    {
        occ = max(occ, y);
    }
    int ans = n - occ, need = n - occ;

    while(need)
    {
        ans++;
        need -= occ;
        if( need <= 0 ) break;
        occ *= 2;
    }
    cout << ans << endl;
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