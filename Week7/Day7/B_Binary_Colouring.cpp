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
    vector<int> res(31,0);

    for(int i = 0; i<30; i++)
    {
        if(1LL & (n>>i))
        {
            if(res[i])
            {
                res[i+1] = 1;
                res[i] = 0;
            }
            else if(i>0)
            {
                if(res[i-1] == 1)
                {
                    res[i+1] = 1;
                    res[i-1] = -1;
                }
                else{
                    res[i] = 1;
                }
            }
            else if(i==0){
                res[i] = 1;
            }
        }
    }
    cout << 31 << "\n";
    for(int i = 0; i<31; i++)
    {
        cout << res[i] << " ";

    }
    cout << endl;
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