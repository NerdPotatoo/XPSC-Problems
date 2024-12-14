#include<bits/stdc++.h>

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

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ones, zeros;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == '1') ones.push_back(i);
        else zeros.push_back(i);
    }
    // for(auto x : zeros) cout<<x<<" ";
    // cout<<endl;
    int cnt_zero = 0;
    for(int i = 1; i<ones.size(); i++)
    {
        if((ones[i]-ones[i-1])>1) cnt_zero++;
        
    }
    if(ones.size()>0 && ones[0]>0) cnt_zero++;
    if(ones.size()>0 &&ones.back()<n-1) cnt_zero++;
    // cout<<cnt_zero<<endl;
    int cnt_one = 0;

    for(int i = 1; i<zeros.size(); i++)
    {
        if(zeros[i]-zeros[i-1]>1) cnt_one++;
    }
    if(zeros.size()>0 &&zeros[0] > 0) cnt_one++;
    if(zeros.size()>0 &&zeros.back() < n-1) cnt_one++;
    cout<<min(cnt_one,cnt_zero)<<endl;
    // cout<<cnt_one<<endl;
}
int32_t main()
{
    fastIO;
    int t = 1;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}