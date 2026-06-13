#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> preSumMap;
        int remSum = 0;
        int totalSubarrays = 0;
        
        preSumMap[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            remSum += nums[i];
            
            int target = remSum - k;
            if (preSumMap.find(target) != preSumMap.end()) {
                totalSubarrays += preSumMap[target];
            }
            preSumMap[remSum]++;
        }
        
        return totalSubarrays;
    }
};