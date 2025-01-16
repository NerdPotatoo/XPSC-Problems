#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    string s, t;
    cin >> s >> t;
    int c1 = 0, c2 = 0, mask = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '+') c1++;
        else c1--;
        
        
        if(t[i] == '+') c2++;
        else if(t[i]=='-') c2--;
        else mask++;
    }
    
    double ans = 1;
    if(c1==c2 && mask==0)
    {
        printf("%.12f\n",ans);
        return;
    }
    
    int cnt = 0;
    for(int i = 0; i < (1<<mask); i++)
    {
        int tmp = 0;
        
        for(int k = 0; k<mask; k++)
        {
            if(i&(1<<k)) tmp++;
            else tmp--;
        }
        if(c2+tmp == c1) cnt++;
    }
    
     ans = 1.0 * cnt;
    ans /= (1<<mask);
    printf("%.12f\n",ans);
}
int32_t main()
{
    fastIO;
    int T = 1;
    // cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}