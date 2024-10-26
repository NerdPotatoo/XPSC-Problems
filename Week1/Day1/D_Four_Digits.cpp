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
    string s;
    cin>>s;
    int n = 4 - s.size();
    string tmp(n,'0');
    tmp += s;
    cout<<tmp;
    
    return 0;
}