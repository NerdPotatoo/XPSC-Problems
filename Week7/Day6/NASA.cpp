#include<bits/stdc++.h>

#define ll long long
#define llu long long unsigned
#define ld long double
#define endl '\n'
#define all(x) x.begin(), x.end()
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define fi first
#define se second
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int mod = 1e9+7;
const int maxN = (1 << 15) - 1;
vector<int> allPalindrome;

bool isPalindrome(int n)
{
    string s = to_string(n);
    int len = s.size();
    for(int i = 0; i< len/2; i++)
    {
        if(s[i] != s[len - i - 1])
        {
            return false;
        }
    }
    return true;
}

void markPalindrome()
{
    for(int i = 0 ; i < maxN; i++)
    {
        if(isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}
void solve()
{
    // CODE HERE
    // cout<< isPalindrome(12);
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxN+1);

    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll ans = n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<allPalindrome.size(); j++)
        {
            int curr = (a[i] ^ allPalindrome[j]);
            ans += cnt[curr];
        }
    }

    cout<< (ans / 2) <<endl;
    
}
int32_t main()
{
    fastIO;
    int t = 1;
    markPalindrome();
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        // cout<<"Case "<<cs<< ": "<<solve();
        solve();
    }
    return 0;
}