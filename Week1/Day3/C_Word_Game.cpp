#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
typedef long long ll;
typedef long long unsigned llu;
typedef long double ld;
 
int32_t main()
{
    fastIO;
    // CODE HERE
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,pair<int, vector<int>>> mp;
        vector<int> ans(3);
        for(int i = 1; i<=3; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                string s;
                cin>>s;
                mp[s].first++;
                mp[s].second.push_back(i);
            }
        }
        for(auto [x,y]:mp)
        {
            if(y.first == 2)
            {
                ans[--y.second[0]]++;
                ans[--y.second[1]]++;
            }
            else if(y.first==1){
                ans[--y.second[0]] += 3;
            }
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}