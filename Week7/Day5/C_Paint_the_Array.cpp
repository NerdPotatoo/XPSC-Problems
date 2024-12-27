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

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int G1 = 0, G2 = 0;
    for(int i = 0; i<n; i++)
    {
        if(i&1) G2 = __gcd(G2,a[i]);
        else G1 = __gcd(G1,a[i]);
    }

    // cout<< G1<<" "<<G2<<endl;
    bool Ok = true;
    for(int i = 0; i<n; i+=2)
    {
        if(a[i] % G2==0)
        {
            Ok= false;
        }
    }
    if(Ok)
    {
        cout<<G2<<endl;
    }
    else{
        Ok = true;
        for(int i = 1; i<n; i+=2)
        {
            if(a[i]%G1==0)
            {
                Ok = false;
            }
        }
        if(Ok)
        {
            cout<<G1<<endl;
        }
        else{
            cout<<0<<endl;
        }
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