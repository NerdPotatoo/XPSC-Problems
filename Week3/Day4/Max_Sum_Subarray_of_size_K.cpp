
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        long long ans = 0, sum = 0;
        int l = 0, r = 0, sz = arr.size();
        
        while(r<sz)
        {
            sum += arr[r];
            if(r-l+1 == k)
            {
                ans = max(sum, ans);
                sum -= arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}