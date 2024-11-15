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
    string a, b;
    int f1, f2;
    cin>>a>>b;
    
    if(a.back() == 'L' && b.back() == 'S')
    {
        f1 = 2;
        f2 = 1;
    }
    else if(a.back() == 'S' && b.back() == 'L')
    {
        f1 = 1;
        f2 = 2;
    }
    else if(a.back() == 'M' && b.back() == 'S')
    {
        f1 = 2;
        f2 = 1;
    }
    else if(a.back() == 'S' && b.back() == 'M')
    {
        f1 = 1;
        f2 = 2;
    }
    else if(a.back() == 'M' && b.back() == 'L')
    {
        f1 = 1;
        f2 = 2;
    }
    else if(a.back() == 'L' && b.back() == 'M')
    {
        f1 = 2;
        f2 = 1;
    }
    else{
        f1 = 1;
        f2 = 1;
        if(a.back() == 'S')
        {
            if(a.size()>b.size())
            {
                f1 = 1;
                f2 = 2;
            }
            else if(a.size()<b.size())
            {
                f1=2;
                f2=1;
            }
        }
        if(a.back() == 'L')
        {
            if(a.size()>b.size())
            {
                f1 = 2;
                f2 = 1;
            }
            else if(a.size()<b.size())
            {
                f1=1;
                f2=2;
            }
        } 
    }
    

    if(f1>f2) cout<<">"<<endl;
    else if(f1<f2) cout<<"<"<<endl;
    else cout<<"="<<endl;
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