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
    multiset<int> st;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    int i = 1, ans = 0;
    auto it = st.begin();
    while(it!=st.end())
    {
        if(*it>=i)
        {
            ans++;
            i++;
        }
        it++;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    fastIO;
    ll t = 1;
    // cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}