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
    int n, m;
    cin >> n >> m;
    ll perimeter = 1LL * m * 4 * n;
    int x, y,curx = 0, cury = 0, topx, topy, tmp;
    // cout <<perimeter <<endl;
    for(int i = 1; i<=n; i++)
    {
        cin >> x >> y;
        curx += x;
        cury += y;
        
        if(i > 1)
        {
            if(topx>curx)
            {
                tmp = topx-curx;
                perimeter -= tmp*2;
            }
            if(topy>cury)
            {
                tmp = (topy-cury);
                perimeter -= tmp*2;
            }
        // cout << curx << " " << cury << "\n";
        // cout << perimeter << " -> " << topx << " " << topy << "\n";
        }
        topx = curx+m;
        topy = cury+m;
        
    }

    cout << perimeter << endl;
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