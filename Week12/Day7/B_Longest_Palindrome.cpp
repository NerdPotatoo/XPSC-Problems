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
bool isPalindrome(string s)
{
    for(int i = 0 ; i<=s.size()/2; i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    // CODE HERE
    int n, m;
    cin >> n >> m;
    map<string,int> mp;
    string s, ans, extra = "";
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        mp[s] = 0;
    }
    vector<string> v;
    for(auto [str,check]:mp)
    {
        if(!check)
        {
            string t = str;
            reverse(all(t));
            if(isPalindrome(str)){
                auto it = find(all(v),str);
                if(it!=v.end())
                {
                    v[it-v.begin()] += str;
                }
                else{
                    v.push_back(str);
                }
                mp[str] = 1;
            }
            else if(mp.find(t) != mp.end())
            {
                mp[t] = 1;
            }
            else{
                mp[str] = 1;
            }
        }
    }

    for(auto [str,ok]:mp)
    {
        if(!ok)
        {
            ans += str;
        }
    }
    int r = 0;
    for(auto c:v)
    {
        if(c.size()>r)
        {
            extra = c;
            r = c.size();
        }
    }

        string t = ans;
        reverse(all(t));
        ans = ans + extra + t;

    cout << ans.size() << '\n';
    cout << ans << '\n';
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