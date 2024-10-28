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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }

    int serejaScore = 0, dimaScore = 0;

    int i = 0, j = n-1, flg = 0;
    while(i<=j)
    {
        if(!flg){
            if(v[i]>v[j])
            {
                serejaScore += v[i];
                i++;
            }
            else{
                serejaScore += v[j];
                j--;
            }
            flg = 1;
        }
        else{
            flg = 0;
            if(v[i]>v[j])
            {
                dimaScore += v[i];
                i++;
            }
            else{
                dimaScore += v[j];
                j--;
            }
        }
    }


    cout << serejaScore << " " << dimaScore << '\n';
    return 0;
}