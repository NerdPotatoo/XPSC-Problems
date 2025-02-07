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
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x:a) cin >> x;

    bool ok = true;
    int cur = a[n-1];
    for(int i = n-1; i>=0; i--)
    {
        if(a[i]>cur)
        {
            if(a[i]>=10)
            {
                int x = a[i]%10;
                int y = (a[i]/10)%10;
                // cout << y << ' ' << x;
                if(x>cur)
                {
                    ok = false;
                    break;
                }
                if(y>x)
                {
                    ok = false;
                    break;
                }
                cur = y;
            }
            else{
                ok = false;
                break;
            }
        }
        else{
            cur = a[i];
        }
    }
    if(ok) yes
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