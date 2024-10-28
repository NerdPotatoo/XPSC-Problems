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
        int n;
        cin>>n;
        string s; 
        cin>>s;

        int st = n , ed = -1;
        int i = 0, j = n-1;
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                st = min(st,i);
                ed = max(ed,i);
            }
        }

        cout<<ed-st+1<<endl;
    }
    return 0;
}