//485. Max Consecutive Ones

#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int MaxOne =0,One=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                One++;
                if(MaxOne<One) MaxOne=One;
            }
            else One=0;
        }
        return MaxOne;
    }
};