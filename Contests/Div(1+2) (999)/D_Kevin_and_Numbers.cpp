#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mod = 1e9+7;

void solve()
{
    // CODE HERE
    int n, m;
    cin >> n >> m;
    map<int,int> m1, m2;
    int x;

    for(int i = 0; i<n; i++)
    {
        cin >> x;
        m1[x]++;
    }

    for(int i = 0; i<m; i++)
    {
        cin >> x;
        m2[x]++;
    }

    for(auto [x,y] : m1)
    {
        if(m2.find(x) != m2.end())
        {
            if(y < m2[x])
            {
                m2[x] -= y;
                m1[x] = 0;
            }
            else if(m2[x] < y)
            {
                m1[x] -= m2[x];
                m2[x] = 0;
            }
            else{
                m1[x] = 0;
                m2[x] = 0;
            }
        }
    }


    bool ok1 = true, ok2 = true;
    for(auto [x,y]:m2)
    {
        if(y>0) {
            ok2 = false;
            break;
        }
    }
    for(auto [x,y]:m1)
    {
        if(y>0) {
            ok2 = false;
            break;
        }
    }

    if(ok1 && ok2)
    {
        yes
        return;
    }



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