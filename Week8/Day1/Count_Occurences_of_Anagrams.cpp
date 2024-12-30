//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        
        int n = txt.size();
        int k = pat.size();
        
        vector<int> t(26,0);
        vector<int> win(26,0);
        
        for(int i = 0; i<k; i++)
        {
            t[pat[i]-'a']++;
        }
        
        int l = 0, r = 0, count = 0;
        
        while(r<n)
        {
            win[txt[r]-'a']++;
            
            if(r-l+1 == k)
            {
                bool ok = true;
                
                for(int i = 0; i<26; i++)
                {
                    if(t[i]!=win[i])
                    {
                        ok = false;
                        break;
                    }
                }
                
                if(ok) count++;
                
                win[txt[l]-'a']--;
                l++;
            }
            r++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends