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
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    string s ;
    bool ok = true;;
    int cur = a[0];
    for(int i = 0; i<n; i++)
    {
        if(a[i]>=cur && ok)
        {
            s += "1";
            cur = a[i];
        }
        else if((cur>a[i]) && a[i] <= a[0] && ok)
        {
            ok = false;
            s+="1";
            cur = a[i];
        }
        else if(a[i]>=cur && a[i]<=a[0])
        {
            s+= "1";
            cur = a[i];
        }
        else{
            s += "0";
        }

        
    }
    cout << s << "\n";
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