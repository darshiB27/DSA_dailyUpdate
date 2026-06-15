//1.Two sum

#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) 
            {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};

//167.Two Sum II

/*

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int low = 0;
        int high = numbers.size() - 1;
        while (low < high) 
        {
            int currentSum = numbers[low] + numbers[high];
            if (currentSum == target) return {low + 1, high + 1};
            else if (currentSum < target) low++;
            else high--;
        }
        return {};
    }
};

*/
