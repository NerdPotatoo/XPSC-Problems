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
    int h, n ,m;
    cin >> h >> n >> m;
    while(n>0)
    {
        int x = (h/2)+10;
        if(x<=h)
        {
            h = x;
            n--;
        }
        else{
            break;
        }
    }
    h -= (m*10);
    // while(n>0)
    // {
    //     int x = (h/2)+10;
    //     if(x<=h)
    //     {
    //         h = x;
    //         n--;
    //     }
    //     else{
    //         break;
    //     }
    // }

    if(h<=0) yes
    else no
    
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