#include<bits/stdc++.h>

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

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin>>n;
    ll sum = 0;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]<0) sum += ((-1)*v[i]);
        else sum += v[i];
    }
    int cnt = 0, i = 0;
    while(i<n)
    {
        if(v[i]<0)
        {
            cnt++;
            while(i<n && v[i]<= 0)
            {
                i++;
            }
        }
        else{
            while(i<n && v[i]>=0)
            {
                i++;
            }
        }
    }
    cout<<sum<<" "<<cnt<<endl;

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