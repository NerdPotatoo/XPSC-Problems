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
    while(t--)
    {
        int x;
        cin>>x;
        int ans = 100-x;
        if(ans<10) ans = 0;
        else{
            ans /= 10;
            ans *= 10;
        }
        cout<<ans<<endl;
    }
    return 0;
}