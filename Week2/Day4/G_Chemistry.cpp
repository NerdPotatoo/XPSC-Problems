#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second

#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;

void solve()
{
    // CODE HERE
    
    int n, k;
    cin >> n >> k;

    string s;
    cin>>s;
    // map<char,int> cnt;
    vector<int> cnt(26,0);
    for(auto x:s)
    {
        cnt[x-'a']++;
    }
    for(int i = 0; i<26;i++)
    {
        if(cnt[i]&1 && k>0) {
            k--;
            cnt[i]--;
        }
        if(k == 0) break;
    }
    if(k>0){
        for(int i = 0; i<26;i++)
        {
            if(k>0)
            {
                if(k>=cnt[i])
                {
                    k -= cnt[i];
                    cnt[i]  = 0;
                }
                else{
                    cnt[i] -= k;
                    k = 0;
                }
            }
            if(k==0) break;
        }
    }
    int ok = 0;
    for(auto x : cnt)
    {
        if(x&1) ok++;
    }
    if(ok>1) no
    else yes
}
int32_t main()
{
    fastIO;
    ll t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}