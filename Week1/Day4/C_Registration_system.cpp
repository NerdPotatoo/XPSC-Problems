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
    map<string,int> mp;
    string s;
    while(t--)
    {
        cin>>s;
        if(mp.find(s) == mp.end())
        {
            mp[s]++;
            cout<<"OK\n";
        }
        else{
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
    }
    return 0;
}