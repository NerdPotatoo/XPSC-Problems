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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> ar, ans(n);
    ans[0] = a;
    ans[n/2] = b;
    for(int i = 1; i<=n; i++)
    {
        if(i != a && i != b) ar.push_back(i);
    } 

    int l = n-3, ok = 0;

    for(int i = 1; i<n/2; i++)
    {
        if(ar[l]>a){
            ans[i] = ar[l--];
            
        } 
        else{
            ok = 1;
            break;
        }
    }
    if(ok)
    {
        cout << -1 << '\n';
        return;
    }

    for(int i = (n/2)+1; i<n; i++)
    {
        if(ar[l]<b) ans[i] = ar[l--];
        else{
            ok = 1;
            break;
        }
    }
    if(ok)
    {
        cout << -1 << '\n';
        return;
    }
    
    for(auto e:ans)
    {
        cout << e << ' ';
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