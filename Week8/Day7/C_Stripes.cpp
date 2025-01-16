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
    char grid[8][8];
    bool ok = false, red = false, blue = false;
    for(int i = 0; i<8; i++)
    {
        int cnt1 = 0;
        for(int j = 0; j<8; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'R') cnt1++; 
        }

        if(cnt1 == 8)
        {
            red = true;
        }
    }
    
    if(red) cout <<"R" << "\n";
    else cout <<"B"<<"\n";
        
    
   
    
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