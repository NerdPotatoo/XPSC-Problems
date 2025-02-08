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
    int res = 0;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    multiset<int> ml;
    for(int i = 0 ; i<n; i++)
    {
        auto it = ml.upper_bound(a[i]);

        if(it == ml.end())
        {
            res++;
            ml.insert(a[i]);
        }
        else{
            ml.erase(it);
            ml.insert(a[i]);
        }
    }
    cout << ml.size() << '\n';
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