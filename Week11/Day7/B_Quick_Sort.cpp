#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >>T;
    while(T--)
    {
        int n, k, x;
        cin >> n >> k;
        vector<pair<int,int>>a;
        for(int i = 0; i<n; i++)
        {
            cin >> x;
            a.push_back({x,i+1});
        }
        
        if(is_sorted(a.begin(),a.end())){
            cout << 0 << "\n";
            continue;
        }
        sort(a.begin(),a.end());
        if(k == n)
        {
            cout << 1 << "\n";
            continue;
        }
        int idx = 0;
        for(int i = 1; i<n; i++)
        {
             if(a[i].second < a[i-1].second) {
                idx = i;
                break;
             }
        }
        cout << ceil((1.0*(n-idx))/k) << "\n";
        
    }
}