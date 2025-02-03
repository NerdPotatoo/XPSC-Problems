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
    vector<int> a(k);
    for(int &x:a) cin >> x;
    sort(allr(a));
    for(int &x:a) x = n-x;
    vector<ll> pref(k);
    pref[0] = a[0];
    for(int i = 1; i<k; i++)
    {   
        pref[i] = pref[i-1]+a[i];
    }
    n--;
    int res = upper_bound(all(pref),n) - pref.begin();
    cout << res << '\n';
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