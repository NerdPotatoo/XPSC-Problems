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
    int n, m;
    cin >> n >> m;
    if( (m < n) || (!(n&1) && (m&1)) )
    {
        no
        return;
    }
    // if(n==m)
    // {
    //     yes
    //     for(int i = 1; i<=n; i++)
    //     {
    //         cout << 1 <<" ";
    //     }
    //     cout<< endl;
    //     return;
    // }
    if(!(n&1) && !(m&1)) // e  e
    {
        yes
        int sum = 0;
        for(int i = 1; i<= n-2; i++)
        {
            cout<<1<<" ";
            sum ++;
        }

        cout << (m-sum)/2 << " " << (m-sum)/2 << endl;
    }
    else if((n&1))
    {
        yes
        for(int i = 1; i<n; i++)
        {
            cout << "1 ";
        }
        cout<<(m-n+1)<<endl;
        
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