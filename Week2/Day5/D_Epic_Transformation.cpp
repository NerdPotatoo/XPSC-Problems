#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second

#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

void solve()
{
    // CODE HERE
    int n;
    cin>>n;
    map<int,int> cnt;
    for(int i = 1; i<=n; i++)
    {
        int x;
        cin>>x;
        cnt[x]++;
    }
    priority_queue<int> pq;
    for(auto [x,y] : cnt)
    {
        pq.push(y);
    }
    while(!pq.empty())
    {
        if(pq.size()<=1)
        {
            break;
        }

        int f = pq.top();
        pq.pop();
        int s = pq.top();
        pq.pop();
        f--, s--;

        if(f>=1) pq.push(f);
        if(s>=1) pq.push(s);
    }

    int ans = 0;
    while(!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fastIO;
    ll t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}