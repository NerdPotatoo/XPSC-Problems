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
    int a,b;
    cin>>a>>b;
    int mx = max(a,b);
    mx += max(mx-1, min(a,b));
    cout<<mx;

    return 0;
}