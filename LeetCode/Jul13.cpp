#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> arr;
        string universal= "123456789";
        int lowL=to_string(low).length();
        int highL=to_string(high).length();
        if(highL>9) highL=9;
        for(int i=lowL;i<=highL;i++)
        {
            for(int start=0;start<=universal.length()-i;start++)
            {
                string subUniversal=universal.substr(start,i);
                int numSub=stoi(subUniversal);
                if(numSub>=low && numSub<=high)
                {
                    arr.push_back(numSub);
                }
            }
        }
        return arr;
    }
};