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
    int n;
    cin >> n;
    deque<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >>a[i];
    }

    sort(all(a));
    int st, lt;
    int ok = 0;
    while(a.size()!=1)
    {
        st = a.front();
        lt = a.back();
        if(ok)
        {
            if(st<=lt)
            {
                a.pop_back();
            }
            else{
                a.pop_front();
            }
            
        }
        else{
            if(st<=lt)
            {
                a.pop_front();
            }
            else{
                a.pop_back();
            }
        }
        ok ^= 1;
    }
    cout<<a.back()<<endl;
    // for(auto x:a)
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
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