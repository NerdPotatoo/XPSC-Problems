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

string conv(int n)
{
    string s;
    for(int i = __lg(n); i>=0; i--)
    {
        if(n&(1<<i))s.push_back('1');
        else s.push_back('0');
    }
    return s;
}
void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    string s = conv(n);
    // cout << s << endl;
    string s1 = "11";


    int pos = 0, it = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == s1[it])
        {
            it++;

            if(it==2)
            {
                pos = i+1;
                break;
            }
        }
    }

    if(it<2)
    {
        cout << 1 << endl;
        return;
    }
    
    int res = 0;
    for(int i = pos; i<s.size(); i++)
    {
        if(s[i] =='0') res++;
    }

    int ans = pow(2,res);
    cout << ans << endl;


}
int32_t main()
{
    fastIO;
    int T = 1;
    cin>>T;
    for(int cs = 1; cs <= T; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}