//189. Rotate Array

#include <algorithm>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % (nums.size());

        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};

int main() {
    
    Solution obj;
    
    vector <int> arr={1,2,3,4,5,6,7,8,9,10};
    obj.rotate(arr,3);
    
    cout << "Array after k right rotations " ;
    for(int i : arr) {
        cout << arr[i] << " ";
    }
    cout<< endl;
    
    return 0;
}