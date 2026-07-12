//1331. Rank Transform of an Array

#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        if (arr.empty()) return {};
        vector<int> brr=arr;
        sort(brr.begin(), brr.end()); 
        unordered_map<int,int> Amap;
        int rank=1;
        for(int i=0;i<brr.size();i++)
        {
            if (Amap.find(brr[i]) == Amap.end()) 
            {
                Amap[brr[i]] = rank;
                rank++; 
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = Amap[arr[i]];
        }
        return arr; 
    }
};

int main()
{
    Solution obj;
    vector<int> arr;
    arr.push_back(40);
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    obj.arrayRankTransform(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }

}