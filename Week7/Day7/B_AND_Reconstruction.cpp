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
    vector<int> b(n-1);
    for(int i = 0; i<n-1; i++)
    {   
        cin >> b[i];
    }

    if(n == 1)
    {
        cout << b[0] << " " << b[0] <<  "\n";
        return;
    } 

    vector<int> a;
    a.push_back(b[0]);
    for(int i = 0; i<n-2; i++)
    {
        a.push_back((b[i]|b[i+1]));
    }

    a.push_back(b[n-2]);
    bool ok = true;


    for(int i = 0; i<n-1; i++)
    {
        if((a[i] & a[i+1]) != b[i])
        {
            // cout << (a[i] & a[i+1]) << " - > " << b[i] << endl;
            ok = false;
        }
    }

    if(!ok){
        cout << -1 << "\n";
        return;
    }
    for(auto x:a)
    {
        cout << x << " ";
    }
    cout << endl;
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