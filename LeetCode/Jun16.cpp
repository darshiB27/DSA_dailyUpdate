//2161.  Partition Array According to Given Pivot

#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        int pivotCount = 0;
        for (int i = 0; i < n; i++) 
        {
            if (nums[i] < pivot) ans[left++] = nums[i];
            else if (nums[i] > pivot) ans[right--] = nums[i]; 
            else pivotCount++;
        }
        while (pivotCount > 0) 
        {
            ans[left++] = pivot;
            pivotCount--;
        }
        reverse(ans.begin() + right + 1, ans.end());
        return ans;
    }
};