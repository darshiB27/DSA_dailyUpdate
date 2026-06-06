//Move all zeroes to the end 

#include<vector>
 using namespace std ;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++; 
            }
        }
    }
};
int main ()
{
    //
}
