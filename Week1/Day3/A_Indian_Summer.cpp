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
    map<string , int> mp;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        mp[s]++;    
    }

    cout<<mp.size();
    return 0;
}