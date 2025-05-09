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


    int ans = 0;
    for(int k = 1; k<=n; k++)
    {
        multiset<int> s(all(a));

        for(int i = 0; i<k; i++)
        {
            auto it = upper_bound(all(s),k-i);
            if(it == s.begin()) break;
            s.erase(--it);
            if(!s.empty())
            {
                int x = *s.begin() + (k-i);
                s.erase(s.begin());
                s.insert(x);
            }
        }
        if(s.size() + k == n)ans = k;
    }
    cout << ans << '\n';
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