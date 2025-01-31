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
int divisor(int l)
{
    for(int i = 2; i*i<=l; i++)
    {
        if(l%i==0)
        {
            return i;
        }
    }
    return l;
}
void solve()
{
    // CODE HERE
    int l,r;
    cin >> l >> r;
    if(r<=3)
    {
        cout << -1 << "\n";
        return;
    }
    else{
        for(int i = l; i <= r; i++)
        {
            int div = divisor(i);
            if(i != div)
            {
                cout << div << " " << i-div <<  "\n";
                return;
            }
        }
        cout << -1 << "\n";
    }
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