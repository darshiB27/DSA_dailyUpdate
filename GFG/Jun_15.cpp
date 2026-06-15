//two sum (using hash map)

#include <vector>
#include <unordered_map>

using namespace  std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < arr.size(); i++) {
            int complement = target - arr[i];
            if (numMap.find(complement) != numMap.end()) {
                return true;
            }
            numMap[arr[i]] = i;
        }
        return false;
    }
};