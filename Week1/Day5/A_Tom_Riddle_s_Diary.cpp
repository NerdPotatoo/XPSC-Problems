#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    map<string, bool> mp;
    while(t--)
    {
        string s;
        cin>>s;
        auto it = mp.find(s);
        if(it == mp.end())
        {
            cout<<"NO\n";
            mp[s] = true;
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}