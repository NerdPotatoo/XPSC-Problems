#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i<m; i++)
    {
        cin >> b[i];
    }
    vector<int> ans(m);
    int i = 0, j= 0, cnt = 0;
    while(j<m)
    if(b[j]>a[i] && i<n)
    {
        i++;
        cnt++;
    }
    else{
        ans[j] = cnt;
        j++;  
    } 
    for(auto x:ans)
    {
        cout<<x << " ";
    }
}
