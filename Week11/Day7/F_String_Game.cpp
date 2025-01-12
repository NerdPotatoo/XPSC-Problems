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
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    bool found = false;
    auto ok = [&](int del)
    {
        vector<bool> bad(n);

        for(int i = 0; i <= del; i++)
        {
            bad[a[i]] = true;
        }

        int j = 0;
        for(int i = 0; i<n; i++)
        {
            if(!bad[i] && t[i] == p[j])
            {
                j++;
            }
            if(j == m)
            {
                found = true;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n-1, mid, ans = 0;
    while(l<=r)
    {
        mid = l + (r-l)/2;

        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << (found? ans+1 : ans) << "\n";
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