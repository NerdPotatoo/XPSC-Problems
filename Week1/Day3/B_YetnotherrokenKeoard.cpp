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
        string s, ans;
        int b = 0, B = 0;
        cin>>s;
        for(int i = s.size()-1; i>=0; i--)
        {
            if(s[i] == 'b') {
                b++;
                continue;
            }
            else if(s[i] == 'B') {
                B++;
                continue;
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                if(b>0)
                {
                    b--;
                    continue;
                }
                ans.push_back(s[i]);
            }
            else if(s[i] >= 'A' && s[i] <= 'Z')
            {
                if(B>0)
                {
                    B--;
                    continue;
                }
                ans.push_back(s[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    return 0;
}