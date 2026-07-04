//3. Longest Substring Without Repeating Characters
#include<vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> mpp(256, -1);
        int left = 0;
        int right = 0;
        int n = s.length();
        int maxLen = 0;
        
        while (right < n) 
        {
            if (mpp[s[right]] != -1) 
            {
                left = max(mpp[s[right]] + 1, left);
            }
            mpp[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
            right++; 
        }
        return maxLen;
    }
};