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
        int n, idx = 0;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i = 0; i<n; i++)
        {
           int  sum = 0;
           for(int j = i; j<n; j++)
           {
                sum += v[j];
                if(sum%2==0)
                {
                    idx = max(j-i+1,idx);
                }
           }
           
        }
        cout<<idx<<endl;
    }
    return 0;
}