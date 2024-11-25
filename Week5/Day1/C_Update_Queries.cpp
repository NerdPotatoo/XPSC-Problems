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
    string s1,s2;
    cin >> s1;
    set<int> st;
    for(int i = 1; i<=m; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    multiset<char> ml;
    cin >> s2;
    for(auto c : s2)
    {
        ml.insert(c);
    }

    for(auto i : st)
    {
        s1[i-1] = *ml.begin();
        ml.erase(ml.begin());
    }
    cout<<s1<<endl;
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