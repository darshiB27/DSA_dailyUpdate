//287. Find the Duplicate Number

#include<vector>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];
        
        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]]; 
        } while (tortoise != hare);
        
        hare = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }
        return tortoise;
    }
};

/*
class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        long long n = nums.size();
        long long totalSum= n*(n+1)/2;
        long long sum=0;
        for (int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        return totalSum-sum;
    }
};
*/

int main(){};