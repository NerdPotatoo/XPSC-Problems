#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
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
    cin>>n;
    priority_queue<int> pq;
    vector<pair<int,int>> ans;
    for(int i = 1; i<=n; i++)
    {
        pq.push(i);
    }
    while(pq.size()>1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        ans.push_back({a,b});
        int add = ceil(1.0*(a+b)/2);
        pq.push(add);
    }
    cout<<pq.top()<<"\n";
    for(auto [x,y]:ans)
    {
        cout<<x<<" "<<y<<"\n";
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