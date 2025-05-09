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
    vector<int> a(n), idx(n+1);
    for(int i = 0; i<n; i++) 
    {
        cin >> a[i];
        idx[a[i]] = i;
    }
    if(n==1)
    {
        cout << -1 << '\n';
        return;
    }

    sort(all(a));
    for(int i = 0; i<n-1; i++)
    {
        if(idx[a[i]] == i)
        {
            swap(a[i],a[i+1]);
        }
    }

    if(idx[a[n-1]] == n-1)
    {
        swap(a[n-1],a[n-2]);
    }

    for(auto x:a)
    {
        cout << x << ' ';
    }
    cout << '\n';

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