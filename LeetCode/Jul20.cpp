//1260. Shift 2D Grid

#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        if(k>100|| k<0) return grid;
        vector<int> nums;
        int m=grid.size();
        int n=grid[0].size();
        int len=m*n;
        k=k%len;
        if(m>50 ||m<1 || n<1|| n>50) return grid;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                nums.push_back(grid[i][j]);
            }
        }
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
        int a=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]=nums[a];
                a++;
            }
        }

        return grid;
    }

};