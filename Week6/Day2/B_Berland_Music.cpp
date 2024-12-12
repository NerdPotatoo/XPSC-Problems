#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    vector<int> ans(n),v(n), ones, zeros;
    map<int,int> mp;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i;
    }
    string s;
    cin >> s;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '0')
        {
            zeros.push_back(v[i]);
        }
        else{
            ones.push_back(v[i]);
        }
    }

    sort(allr(ones));
    sort(allr(zeros));
    sort(allr(v));
    int j = 0;
    for(int i = 0; i<ones.size(); i++)
    {
        ans[mp[ones[i]]] = v[j];
        j++;
    }
    for(int i = 0; i<zeros.size(); i++)
    {
        ans[mp[zeros[i]]] = v[j];
        j++;
    }
    for(auto x : ans)
    {
        cout << x << " ";
    }
    cout<<endl;

}
int32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}