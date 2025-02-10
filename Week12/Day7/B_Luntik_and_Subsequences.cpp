#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt_one = 0, cnt_zero = 0;
        vector<int> a(n);
        for(auto &x:a) {
            cin >> x;
            if(x==0) cnt_zero++;
            else if(x==1)cnt_one++;
        }

        long long res = powl(2LL,cnt_zero);
        res *= (cnt_one);
        cout << res << '\n';
        
    }
}