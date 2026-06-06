// 75. Sort colors 

#include <algorithm>
#include<vector>

using namespace std ;

class Solution {
public:
    void sortColors(vector<int>& nums) 
    { 
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                mid++;
            } 
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
int main()
{
    //arr=[0,1,2,0,1,2];
}