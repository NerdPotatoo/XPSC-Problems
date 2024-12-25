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
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    vector<string> v;
    for(int i = 0; i < min(n/2, m/2); i++)
    {
        string temp;

        for(int j = i; j<m-i; j++)
        {
            temp.push_back(a[i][j]);
        }
        for(int k = i+1; k<n-i; k++)
        {
            temp.push_back(a[k][m-1-i]);
        }
        for(int j = m-2-i ; j>=i; j--)
        {
            temp.push_back(a[n-1-i][j]);
        }
        for(int k = n-2-i; k>i; k--)
        {
            temp.push_back(a[k][i]);
        }

        v.push_back(temp);
    }

    int cnt = 0;
    for(auto x: v)
    {
        x.push_back(x[0]);
        x.push_back(x[1]);
        x.push_back(x[2]);
        // cout<<x<<' ';
        int sz = x.size();
        for(int i = 0; i<=sz-4; i++)
        {
            // cout<<x.substr(i,4)<<endl;
            if(x.substr(i,4) == "1543")
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
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