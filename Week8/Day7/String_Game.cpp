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
    if(n == 1)
    {
        cout << "Ramos\n";
        return;
    }

    int ok = 0, cnt = 0;
    for(int i = 0; i<n-1; i+=2)
    {
        if(s[i] != s[i+1])
        {
            cnt++;
        }
    }
    while(cnt--)
    {
        ok^=1;
    }
    if(ok) cout << "Zlatan\n";
    else cout << "Ramos\n";

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