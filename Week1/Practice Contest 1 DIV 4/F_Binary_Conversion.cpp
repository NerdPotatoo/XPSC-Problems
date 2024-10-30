/*

            Error

*/



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
        int n,k;
        cin>>n>>k;
        string s,t;
        cin>>s>>t;
        for(int i = 0; i<n-1; i++)
        {
            if(t[i] != s[i])
            {
                for(int j = i+1; j<n; j++)
                {
                    k--;
                    if(s[j] == t[i])
                    {
                        swap(s[i],s[j]);
                        break;
                    }
                }
            }
            if(k<=0) break;
        }
        if(k==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}