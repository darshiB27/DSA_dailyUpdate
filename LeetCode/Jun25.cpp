//217. Contains Duplicate

#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    unordered_map<int,int> arrMap;
    bool containsDuplicate(vector<int>& nums) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(arrMap.find(nums[i])!= arrMap.end()) return true;
            arrMap[nums[i]]=i;
        }    
        return false ;
    }
};