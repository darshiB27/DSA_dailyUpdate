//Find missing element in array

#include<vector>
using namespace std;


class Solution {
  public:
    int missingNum(vector<int>& arr) 
    {
        long long n=arr.size()+1;
        long long sumOfArray=0;
        long long totalSum=n*(n+1)/2;
        for(int i=0;i<arr.size();i++)
        {
            sumOfArray = sumOfArray + arr[i];
        }
        return (totalSum-sumOfArray);
    }
};

int main (){}