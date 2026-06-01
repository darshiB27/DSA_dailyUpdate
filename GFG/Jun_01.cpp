//largest element in an array 
#include <iostream>
#include <vector> 

using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
       int largest= arr[0];
       for(int i = 1 ; i<arr.size() ; i++)
       {
           if(arr[i]>largest )
           {
               largest = arr[i];
           }
       }
       return largest;
    }
};
int main() {
    
    Solution obj;
    
    vector <int> arr={101,2,343,56,564};
    int result = obj.largest(arr);
    
    cout << "Largest number in array: " << result << endl;
    
    return 0;
}