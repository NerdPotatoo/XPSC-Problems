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
    int n, q;
    int i = 1;
    while(1)
    {
        cin >> n >> q;
        if(n == 0 && q == 0)
        {
            break;
        }

        vector<int> a(n);
        for(auto &e:a) cin >> e;
        sort(all(a));
        cout << "CASE# "<<i<<":\n";
        i++;
        while(q--)
        {
            int x; cin >> x;

            int ans = lower_bound(all(a),x) - a.begin();

            if(ans == n)
            {
                cout << x << "not found\n";
            }
            else if(a[ans] == x)
            {
                cout << x << " found at "<<ans+1<<endl;
            }
            else{
                cout << x << " not found\n";
            }

        }
    }
}
int32_t main()
{
    fastIO;
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}