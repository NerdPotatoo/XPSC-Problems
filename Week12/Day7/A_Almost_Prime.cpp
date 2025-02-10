#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 0;
    for(int k = 6; k<=n; k++)
    {
        map<int,int> cnt;
        int m = k;
        for(int i = 2; i*i<=m; i++)
        {
            while(m%i==0)
            {
                cnt[i]++;
                m/=i;
            }
        }
        if(m>1)
        {
            cnt[m]++;
        }

        if(cnt.size() == 2)
        {
            ans++;
        }
    }
    
    cout << ans << '\n';
}