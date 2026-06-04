//80. Remove Duplicates from Sorted Array II

/*
Input: nums = [1,1,1,2,2,3]
Output: 5, nums = [1,1,2,2,3,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 1, 1, 2, 2 and 3 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores)

for n duplicate -

int removeDuplicates(vector<int>& nums)
    {
        if(nums.size()<=n) return nums.size();
        int j=n;
        for (int i=n;i<nums.size();i++)
        {
            if(nums[i]!=nums[j-n])
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }

*/

#include <vector>
#include <iostream>

using namespace std ;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()<=2) return nums.size();
        int j=2;
        for (int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[j-2])
            {   
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};


int main() {
    
    Solution obj;
    
    vector <int> arr={1,1,1,5,5,5,7,7};
    int result = obj.removeDuplicates(arr);
    
    cout << "Array after duplicate removal " ;
    for(int i=0; i<result;i++) {
        cout << arr[i] << " ";
    }
    cout<< endl;
    
    return 0;
}


/*
27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {   
                nums[j]=nums[i];
                j++;
            }
        }
        return (j);
    }
};

*/

/*

26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for (int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[j])
            {   
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};

*/