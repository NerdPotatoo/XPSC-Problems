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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> frq(26,0);
    for(auto c:s) frq[c - 'a']++;
    string r = "";
    while(r.size() != n)
    {
        for(int i = 0; i<26; i++)
        {
            if(frq[i] > 0)
            {
                char tm = char(i + 'a');
                r += tm;
                frq[i]--;
            }
        }
    }

    cout << r << endl;
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