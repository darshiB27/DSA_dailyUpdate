/*
    //Unique Number 

    Input: arr[] = [1, 2, 1, 5, 5]
    Output: 2
    Explanation: Since 2 occurs once, while other numbers occur twice, 2 is the answer.
*/

#include<vector>
using namespace std;

class Solution {
  public:
    int findUnique(vector<int> &arr) 
    {
        int Xor=0;
        for ( int i=0; i<arr.size();i++)
        {
            Xor=Xor^arr[i];
        }
        return Xor;
    }
};