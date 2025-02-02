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
    cin >> n;
    vector<int> a(n);
    for(int &x:a) cin >> x;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        int lw = lower_bound(all(a),x)-a.begin();
        int up = upper_bound(all(a),x)-a.begin();
        string left,right;
        if(up<n) right = to_string(a[up]);
        else right = "X";
        up--;
        while(up >= 0 && a[up]>=x)
        {
            up--;
        }
        if(up<0) left = "X";
        else left = to_string(a[up]);
        
        cout << left << " " << right << '\n';
        
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