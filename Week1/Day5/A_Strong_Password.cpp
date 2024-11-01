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
        string s;
        cin>>s;
        int n = s.size();
        if(n==1){
            if(s[0] == 'z') s.push_back('a');
            else {
                s.push_back((char)(s[0]+1));
            }
            cout<<s<<endl;
        }
        else{
            int i;
            for( i = 0; i<n-1; i++)
            {
                if(s[i] == s[i+1])
                {
                    break;
                }
            }
            string a = s.substr(0,i+1);
            if(a.back() == 'z') a.push_back('a');
            else a.push_back((char)(a.back()+1));

            a += s.substr(i+1, n-i+1);
            cout<<a<<endl;
        }
    }
    return 0;
}