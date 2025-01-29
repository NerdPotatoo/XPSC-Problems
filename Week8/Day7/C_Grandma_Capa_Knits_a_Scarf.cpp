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
    string s;
    cin >> s;
    int ans = n+1;
    for(char c = 'a' ; c<='z'; c++)
    {
        int l = 0, r = n-1, cnt = 0;

        while(l<r)
        {
            if(s[l]==s[r])
            {
                l++;
                r--;
            }
            else if(s[l] == c)
            {
                l++;
                cnt++;
            }
            else if(s[r] == c)
            {
                r--;
                cnt++;
            }
            else{
                cnt = n+1;
                break;
            }
        }
        ans = min(cnt,ans);
    }

    if(ans == n+1) cout << -1 << "\n";
    else cout << ans << "\n";
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