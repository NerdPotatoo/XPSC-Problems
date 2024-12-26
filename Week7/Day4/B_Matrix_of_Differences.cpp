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
    cin >> n;

    int mn = 1, mx = n*n;
    int a[n][n];
    for(int i = 0; i<n; i++)
    {
        
        if(i&1)
        {
            for(int j = n-1; j>=0; j--)
            {
                if(j&1)
                {
                    a[i][j] = mn++;
                }
                else{
                    a[i][j] = mx--;
                }
            }
        }
        else{
            for(int j = 0; j<n; j++)
            {
                if(j&1)
                {
                    a[i][j] = mx--;
                    
                }
                else{
                    a[i][j] = mn++;
                    
                }
            }
        }
        
    }


    for(int i = 0;i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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