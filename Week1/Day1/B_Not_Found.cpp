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
    sort(s.begin(),s.end());
    unique(s.begin(),s.end());
    for(char i = 'a'; i <= 'z'; i++)
    {
        if(s[i-'a'] != i)
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}