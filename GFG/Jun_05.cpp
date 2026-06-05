/*
cyclically-rotate-an-array-by-one2614

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int first = arr[(arr.size()-1)];
        for (int i=arr.size()-1; i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=first;
    }
};
*/

//rotate-array-by-n-elements-1587115621/1

#include<vector>
#include<iostream>

using namespace std ;

class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) 
    {
        int n= d%(arr.size());
        
        for(int i=0, j=n-1;i<j;i++,j--)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
        for(int i=n, j=arr.size()-1;i<j;i++,j--)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
        for(int i=0, j=arr.size()-1;i<j;i++,j--)
        {
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
};

int main() {
    
    Solution obj;
    
    vector <int> arr={1,2,3,4,5,6,7,8,9,10};
    obj.rotateArr(arr,3);
    
    cout << "Array after k left rotations  " ;
    for(int i : arr) {
        cout << arr[i] << " ";
    }
    cout<< endl;
    
    return 0;
}