//remove duplicate element from sorted array

#include <vector>
#include <iostream>

using namespace std ;

class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int j=0;
        for (int i=1;i<arr.size();i++)
        {
            if(arr[i]!=arr[j])
            {   
                j++;
                arr[j]=arr[i];
            }
        }
        arr.resize(j + 1);
        return arr;
    }
};
int main() {
    
    Solution obj;
    
    vector <int> arr={1,2,2,5,5,6};
    vector <int> result = obj.removeDuplicates(arr);
    
    cout << "Array after duplicate removal " ;
    for(int i : result) {
        cout << i << " ";
    }
    cout<< endl;
    
    return 0;
}