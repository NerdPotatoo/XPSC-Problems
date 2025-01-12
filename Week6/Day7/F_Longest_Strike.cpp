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
    int n, k;
    cin >> n >> k;
    map<int,int> mp;
    set<int> s;
    int val;
    for(int i = 0; i<n; i++)
    {
        cin >> val;
        mp[val]++;
        if(mp[val] >= k)
        {
            s.insert(val);
        }
    }
    
    if(s.empty())
    {
        cout << -1 << "\n";
        return;
    }
    
    vector<int> v ,  ans(2);
    for(auto val:s) {
        v.push_back(val); 
        // cout << val << " ";
    }
    int l = v[0], r = v[0];
    int last = v[0], mx = 0;

    for(int i = 1; i<v.size(); i++)
    {
        if(v[i]-v[i-1] > 1)
        {
            if(v[i-1]-last > mx)
            {
                mx = v[i-1]-last;
                r = v[i-1], l = last;
            }
            last = v[i];
        }
    }

    if(v[v.size()-1]-last>mx)
    {
        r = v[v.size()-1], l = last;
    }
    cout << l << " " << r << endl;

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