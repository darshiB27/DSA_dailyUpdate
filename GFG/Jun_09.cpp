#include <vector> 
using namespace std;

// Union of 2 sorted arrays 

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
    {
        int i = 0, j = 0;
        int n = a.size(), m = b.size();
        vector<int> unionArr;
        
        while (i < n && j < m) 
        {
            if (a[i] < b[j]) 
            {
                if (unionArr.empty() || unionArr.back() != a[i]) {
                    unionArr.push_back(a[i]);
                }
                i++;
            } 
            else if (b[j] < a[i]) 
            {
                if (unionArr.empty() || unionArr.back() != b[j]) 
                {
                    unionArr.push_back(b[j]);
                }
                j++;
            } 
            else 
            { 
                if (unionArr.empty() || unionArr.back() != a[i]) 
                {
                    unionArr.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        while (i < n) 
        {
            if (unionArr.empty() || unionArr.back() != a[i]) 
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        while (j < m) 
        {
            if (unionArr.empty() || unionArr.back() != b[j]) 
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
        return unionArr;   
    }
};

int main()
{}