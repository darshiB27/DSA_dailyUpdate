//1979. Find Greatest Common Divisor of Array
#include<vector>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int max=nums[0], min=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<min) min=nums[i];
            if(nums[i]>max) max=nums[i];
        }    
        while(min>0)
        {
            int r=max%min;
            max=min;
            min=r;
        } 
        return max;
    }
};

/*
class Solution {
public:
    string rearrangeString(string s, char x, char y) 
    {
        string t=s;
        if(s.length()>100 || s.length() < 1 || x>122 || x<97 || y>122 || y<97 ||x==y) return t;
        int j=0,k=s.length()-1;
        for(int i=0;i<s.length();i++)
            {
                char ch=s[i];
                if(ch>122 || ch<97) return t;
                if(ch==x)
                {
                    t[k]=ch;
                    k--;
                }
                else if(ch==y)
                {
                    t[j]=ch;
                    j++;
                }
                else 
                {
                    t[j]=ch;
                    j++;
                }
            }
        return t;
    }
};
*/