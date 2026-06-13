#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<long long, int> preSumMap;
        long long remSum = 0;
        int maxLen = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            remSum += arr[i]; 
            
            if (remSum == k) {
                maxLen = max(maxLen, i + 1);
            }
            
            long long target = remSum - k;
            if (preSumMap.find(target) != preSumMap.end()) {
                int len = i - preSumMap[target];
                maxLen = max(maxLen, len);
            }
            if (preSumMap.find(remSum) == preSumMap.end()) {
                preSumMap[remSum] = i;
            }
        }
        
        return maxLen;
    }
};