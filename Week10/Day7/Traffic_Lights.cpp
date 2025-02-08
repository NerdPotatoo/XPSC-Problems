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
    int x,n;
    cin >> x >> n;
    set<int> light;
    multiset<int> distance;
    light.insert(0);
    light.insert(x);
    distance.insert(x);
    int pos;
    for(int i = 0; i<n; i++)
    {
        cin >> pos;
        auto ed = light.upper_bound(pos);
        auto st = ed;
        st--;

        distance.erase(distance.find(*ed-*st));
        distance.insert(*ed-pos);
        distance.insert(pos-*st);

        light.insert(pos);
        cout << *(distance.rbegin()) << " ";
    }
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