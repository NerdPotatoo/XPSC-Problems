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
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    vector<int> res(n);
    for(int i = 0; i<n; i++)
    {
        if(i == 0)
        {
            res[i] = abs(a[i]-a[i+1]);
        }
        else if(i == n-1)
        {
            res[i] = abs(a[i]-a[i-1]);
        }
        else{
            res[i] =  max(abs(a[i]-a[i+1]),abs(a[i]-a[i-1]));
        }
    }
    
    
    cout << *min_element(all(res)) << endl;


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