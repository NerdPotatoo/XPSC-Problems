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
    if(n == 2 && s == "()")
    {
        no
        return;
    }
    bool ok = true;
    for(int i = 0; i<n-1; i++)
    {
        string x = s.substr(i,2);
        if(x == ")(")
        {
            ok = false;
            break;
        }
    }
    cout << "YES" << endl;
    if(ok)
    {
        for(int i = 1; i<=n; i++)
        {
            cout<<"()";
        }
        cout<<endl;
    }
    else{
        for(int i = 1; i<=n*2; i++)
        {
            if(i<=n)
            {
                cout<<"(";
            }
            else{
                cout<<")";
            }
        }
        cout<<endl;
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