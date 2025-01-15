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
    for(auto &X:a) cin >> X;
    ll one = 0,flag = -1,tmp = 0, inv = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 1) one++;
        else tmp += one;
    }
    // cout << tmp << endl;
    
    inv = tmp;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 0)
        {
            a[i] = 1;
            flag = i;
            break;
        }
    }
    tmp = 0, one = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 1) one++;
        else tmp += one;
    }

    // cout << tmp << endl;

    if(flag != -1) a[flag] = 0;
    inv = max(inv,tmp);
    tmp = 0, one = 0;
    for(int i = n-1; i>=0; i--)
    {
        if(a[i] == 1)
        {
            a[i] = 0;
            break;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(a[i] == 1) one++;
        else tmp += one;
    }
    
    cout << max(inv,tmp) << endl;
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