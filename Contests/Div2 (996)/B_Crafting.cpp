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
    vector<ll> have(n), need(n);
    for(auto &data:have) cin >> data;
    for(auto &data:need) cin >> data;
    int check = 0, checkId = -1;
    for(int i = 0; i<n; i++)
    {
        if(have[i] < need[i])
        {
            if(need[i]-have[i] > check)
            {
                check = need[i]-have[i];
                checkId = i;
            }
        }
        
    }
    bool ok = true;
    if(check == -1) {
        yes
        return;
    }
    // cout << check <<" "<< checkId <<endl;
    for(int i = 0; i<n; i++)
    {
        if(checkId != i)
        {
            if((have[i] -= check ) < need[i])
            {
                ok = false;
            }
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