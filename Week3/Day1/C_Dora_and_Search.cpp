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
    vector<int> v(n);
    set<int> s;
    for(int i = 0;i<n; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }

    int l = 0, r = n-1, flg = 0;
    while(l<r)
    {
        if((v[l] != *(s.begin()) && v[l] != *(s.rbegin())) && (v[r] != *(s.begin()) && v[r] != *(s.rbegin())))
        {
            flg = 1;
            break;
        }
        else if(( v[l] == *(s.begin()) || v[l] == *(s.rbegin()) ))
        {
            s.erase(v[l]);
            l++;
        }
        else if(( v[r] == *(s.begin()) || v[r] == *(s.rbegin()) )){
            s.erase(v[r]);
            r--;
        }
    }
    if(flg) cout<<l+1<<" "<<r+1<<endl;
    else cout<<-1<<endl;

    

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