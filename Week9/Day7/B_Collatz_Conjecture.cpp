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
    int x,y,k;
    cin >> x >> y >> k;

    while(x>1)
    {
        int req = y - (x%y);
        if(req >= k)
        {
            x += k;
            k = 0;
        }
        else{
            k -= req;
            x += req;   
        }
        while (x%y==0) x = x/y;
        if(k<=0) break;
    }

    if(k>0)
    {
        k = k % (y-1);
        x += k;
        while(x%y==0) x = x/y;
    }
    cout << x << '\n';
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