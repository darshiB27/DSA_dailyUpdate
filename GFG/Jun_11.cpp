//consecutive Ones or Zeros in binary array 

#include<vector>
using namespace std;

class Solution {
  public:
    int maxConsecBits(vector<int> &arr) 
    {
        int Zero=0,One=0,MaxZero=0,MaxOne=0;
        for(int i=0;i<arr.size();i++)
        {
            
                if(arr[i]==1)
                {
                    One++;
                    Zero=0;
                    if(MaxOne<=One) MaxOne=One;
                }
                else if(arr[i]==0)
                {
                    Zero++;
                    One=0;
                    if(MaxZero<=Zero) MaxZero=Zero;
                }
        }
        if(MaxZero>MaxOne) return MaxZero;
        else return MaxOne;
    }
};