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
    int a, b, t, ans = 0;
    cin>>a>>b>>t;
    int i = a;
    while(i<=t)
    {
        ans += b;
        i+=a;
    }
    cout<<ans;
    return 0;
}