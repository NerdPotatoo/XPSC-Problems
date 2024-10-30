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
        int n, x;
        cin>>n>>x;
        int total = 0, get = 0;
        for(int i = n; i>=1; i--)
        {
            if(x>0)
            {
                get += pow(2,i);
                x--;
            }
            else{
                total += pow(2,i);
            }
            
        }
        
        cout<<get-total<<endl;
    }
    return 0;
}