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
    vector<pair<char,int>> v(26);
    for(int i = 0; i<26; i++)
    {
        v[i] = {char(i+'a'),-1};
    }
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        for(int j = 0; j<26; j++)
        {
            if(x>v[j].se)
            {
                cout<<v[j].fi;
                v[j].se = x;
                break;
            }
        }
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