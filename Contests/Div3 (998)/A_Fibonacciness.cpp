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
    vector<int> a(4);
    for(int i = 0; i<4; i++) cin >> a[i];

    int num1 = a[0]+a[1];
    int num2 = a[2]-a[1];
    int cnt1 = 1, cnt2 = 1;
    if(a[1]+num1 == a[2])
    {
        cnt1++;
    }
    if(num1+a[2]==a[3])
    {
        cnt1++;
    }
    if(a[0]+a[1] == num2)
    {
        cnt2++;
    }
    if(num2+a[2]==a[3])
    {
        cnt2++;
    }

    cout << max(cnt1,cnt2) << endl;
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