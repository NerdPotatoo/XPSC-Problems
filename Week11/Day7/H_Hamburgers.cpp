#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve()
{
    // CODE HERE
    string s;
    cin >> s;
    vector<ll> have(3), price(3), need(3);
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'B') need[0]++;
        else if(s[i] == 'S') need[1]++;
        else need[2]++;
    }
    for(int i = 0; i<3; i++) cin >> have[i];
    for(int i = 0; i<3; i++) cin >> price[i];

    ll rubel;
    cin >> rubel;


    auto ok = [&](ll k)
    {
        ll pay = 0LL, lage = 0LL;
        for(int i = 0; i<3; i++)
        {
            lage = k * need[i];
            lage = have[i] - lage;
           if(lage < 0) 
                pay += (abs(lage) * price[i]);
        }
        return (pay<=rubel);
    };

    ll l = 0, r = 1e18, mid, res = 0;
    while(l<=r)
    {
        mid = l + (r-l)/2LL;
        if(ok(mid))
        {
            res = mid;
            l = mid + 1LL;
        }
        else{
            r = mid - 1LL; 
        }
    }
    cout << res << '\n';
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