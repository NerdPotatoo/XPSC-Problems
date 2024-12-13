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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> teach(m);
    for(int i = 0; i<m; i++)
    {
        cin >> teach[i];
    }
    sort(all(teach));

    while(q--)
    {
        int x;
        cin >> x;

        if(x<teach[0])
        {
            cout<<teach[0]-1<<endl;
        }
        else if(x>teach[m-1]){
            cout<<n-teach[m-1]<<endl;
        }
        else{
            int right = lower_bound(all(teach),x) - teach.begin();
            if(x == teach[right]){
                cout << 0 <<endl;
            }
            else{
                cout << (teach[right]-teach[right-1])/2<<endl;
            }
        }
        

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