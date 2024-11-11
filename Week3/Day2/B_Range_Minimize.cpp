#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    sort(all(v));
    if(n==3) cout << 0 <<endl;
    else{
        int ans1 = abs(v[1]-v[n-2]);
        int ans2 = abs(v[n-3]-v[0]);
        int ans3 = abs(v[2]-v[n-1]);
        cout<<min({ans1,ans2,ans3})<<endl;
    }
}
int32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}