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
    int n, ans;
    cin >> n;
    string  s = "",x = "BAN";
    for(int i = 1; i<=n; i++)
    {
        s+=x;
    }
    // cout<<s<<endl;
    ans = (n+1)/2;
    vector<pair<int,int>> pr;
    int i = 0, j = s.size()-1;

    while(i<j)
    {
        if(s[i] == 'B' && s[j] == 'N')
        {
            pr.push_back({i+1, j+1});
            i++;
            j--;    
        }
        while(i<j && s[i]!='B') i++;
        while(j>i && s[j] != 'N') j--; 
    }
    cout<<ans<<endl;
    for(auto [y,z]:pr)
    {
        cout<<y<<" "<<z<<endl;
    }
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