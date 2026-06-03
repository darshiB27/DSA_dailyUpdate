//1752. Check if Array Is Sorted and Rotated
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int flag = 0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]>nums[(i+1) % nums.size()]) flag++;
        }
        if(flag == 1 || flag == 0) return true ;//1
        else return false ;//0
    }
};
int main()
{
    Solution obj;
    vector <int> arr={1, 2, 3, 4, 5 };
    bool result = obj.check(arr);
    cout<<result; 
    return 0;
}
