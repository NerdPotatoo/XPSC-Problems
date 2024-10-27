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
    int a,b,c, i = 1, ans = -1;
    cin>>a>>b>>c;
    while(c<=b)
    {
        if (c>=a && c<=b) {
            ans = c;
            break;
        }
        c*=i;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}