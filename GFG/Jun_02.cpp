#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max=-1; 
        int sdmax=-1;
        for ( int i=0;i<arr.size();i++)
        {
            if(arr[i]>max)
            {
                    sdmax = max;
                    max=arr[i];
            }
            else if(arr[i]>sdmax && arr[i]!=max)
            {
                sdmax = arr[i];
            }
            
        }
         return sdmax ;
    }
};
int main()
{
    Solution obj ;
    vector <int> arr={1, 2, 3, 4, 5 };
    int result = obj.getSecondLargest(arr);
    
    cout<< result;
    return 0;
}
