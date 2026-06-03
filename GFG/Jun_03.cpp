//array is sorted in non-descending order

#include <vector>
#include <iostream>

using namespace std;

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++)
        {
            if (arr[i]>arr[i+1]) return false ;
        }
        return true ;
    }
};

int main()
{
    Solution obj ;
    vector <int> arr={1, 2, 3, 4, 5 };
    bool result = obj.isSorted(arr);
    
    cout<< result;
    return 0;
}
