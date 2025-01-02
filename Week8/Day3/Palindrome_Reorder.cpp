#include<bits/stdc++.h>

#define int long long
#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*
    GCD = __gcd(x,y)
    LCM = ( x / GCD ) * y
    Leftmost setbit = __lg(x);
*/ 
using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    string s;
    cin >> s;
    vector<int> freq(26,0);
    for(auto c : s)
    {
        freq[c-'A']++;
    }
    int cnt = 0;
    int odd =  -1;
    for(auto x:freq)
    {
        if(x&1){
            cnt++;
        }
    }
    if(cnt>1){
        cout<<"NO SOLUTION\n";
        return;
    }
    string res;
    for(int x = 0; x<26; x++)
    {
        if(freq[x]%2==0)
        {
            int len = freq[x]/2;
            while(len--)
            {
                res.push_back(char(x + 'A'));
            }
            
        }
        else{
            odd = x;
        }
    }
    string temp = res;
    reverse(all(temp));
    while(odd != -1 && freq[odd]--)
    {
        res.push_back(char(odd + 'A'));
    }
    res += temp;
    cout<<res<<endl;
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