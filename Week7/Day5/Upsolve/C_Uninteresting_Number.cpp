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

using namespace std;
const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    string s;
    cin >> s;
    int sum = 0, two = 0, three = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '2') two++;
        if(s[i] == '3') three++;

        sum += (s[i]-'0');
    }

    // Divisibility rule 9: 
    // to check if a number X is divisible by 9 or not.
    // sum of all digits of X must be divisible by 9
    if(sum%9==0)
    {
        yes
        return;
    }

    // sqaure of 2 will contribute 2 
    // square of 3 will contribute 6
    // now check all possible combinition 
    // % rule says for X % Y there will be (0 to Y-1) 
    two = min(8LL,two);
    three = min(8LL,three);
    if(two == 0)
    {
        for(int i = 1; i<=three; i++)
        {
            sum += 6;
            if(sum % 9 == 0)
            {
                yes
                return;
            }
        }
        no;
        return;
    }
    for(int i = 0; i<=two; i++)
    {
        for(int j = 0; j<=three; j++)
        {
            if((sum + (2*i) + (6*j))%9 == 0)
            {
                yes
                return; 
            }
        }
    }

    if((sum + (2*two) + (6*three))%9 == 0)
    {
        yes
    }
    no
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