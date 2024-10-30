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
    int n;
    cin>>n;
    vector<string> names(n);
    map<string,bool> mp;
    for(int i = 0; i<n; i++)
    {
        cin>>names[i];
        mp[names[i]] = true;
    }
    
    for(int i = n-1; i>=0; i--)
    {
        if(mp[names[i]])
        {
            cout<<names[i]<<endl;
            mp[names[i]] = false;
        }
    }
    return 0;
}