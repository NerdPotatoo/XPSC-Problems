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
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    string name,cmd,ip;
    while(n--)
    {
        cin>>name>>ip;
        ip += ";";
        mp[ip] = name;
    }
    while(m--)
    {
        cin>>cmd>>ip;
        cout<<cmd<<" "<<ip<<" "<<"#"<<mp[ip]<<endl;
    }
    return 0;
}