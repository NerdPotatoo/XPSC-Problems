#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &e:a) cin >> e;
    int l = 0,  r = 0;
    pbds<pair<int,int>> st;
    
    while(r<n)
    {
        st.insert({a[r],r});
        if((r-l+1 )== k)
        {
            int pos = k/2;
            if(k%2==0)
            {
                pos--;
            }
            auto it = st.find_by_order(pos);
            cout << it->first << " ";
            st.erase({a[l],l});
            l++;
        }
        r++;
    }
    cout << "\n" ;


}
int32_t main()
{
    fastIO;
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}