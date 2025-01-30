
#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int ans = 0;
        int prefixsum = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i<arr.size(); i++)
        {
            prefixsum += arr[i];
            
            if(prefixsum == k)
            {
                ans = i + 1;
            }
            else if(mp.find(prefixsum-k) != mp.end())
            {
                ans = max(ans, i - mp[prefixsum-k]);
            }
            
            if(mp.find(prefixsum) == mp.end())
                mp[prefixsum] = i;
        }
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

