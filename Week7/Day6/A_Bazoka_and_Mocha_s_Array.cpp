#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    vector<int> a(n);
    bool ok = true;
    int check = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        if(check <= a[i])
        {
            check = a[i];
        }
        else{
            ok = false;
        }
    }
    // cout << ok << endl;
    if(ok)
    {
        yes
        return;
    }

    if(a.back()<=a.front())
    {
        int idx = -1;
        for(int i = n-1; i>0; i--)
        {
            idx = i;
            if(a[i-1] > a[i])
            {
            break;
            }
        }
        ok = true;
        check = INT_MIN;
        for(int i = 0; i < idx; i++)
        {
            if(check <= a[i])
        {
            check = a[i];
        }
        else{
                ok = false;
                break;
            }
        }
        if(ok) yes
        else  no
    }
    else{
        no
    }
    // cout << idx << endl;
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