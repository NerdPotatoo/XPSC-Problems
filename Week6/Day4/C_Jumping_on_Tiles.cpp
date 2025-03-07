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
    string s;
    cin >> s;
    int n = s.size();
    map<char , vector<int>> mp;
    for(int i = 0; i<s.size(); i++)
    {
        mp[s[i]].push_back(i);
    }
    int k;
    if(s[0]<s[n-1]) k = 1;
    else k = -1;
    vector<int> ans;
    for(char c = s[0]; c != s[n-1]+k ; c+=k)
    {
        for(auto v : mp[c])
        {
            ans.push_back(v);
        }
    }
    int sum = 0;
    for(int i = 1; i < ans.size(); i++)
    {
        sum += abs(s[ans[i]] - s[ans[i-1]]);
    }
    cout<<sum<<" "<<ans.size()<<endl;
    for(auto x:ans) cout<< x + 1<<" ";
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