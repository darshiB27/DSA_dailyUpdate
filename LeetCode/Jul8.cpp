#include<iostream>
using namespace std;

class Solution {
public:
    void pattern9(int n) 
    {
        for(int i=1;i<=n;i++)
        {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for(int k=1;k<=((2*i)-1);k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--)
        {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for(int k=1;k<=((2*i)-1);k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Solution obj;
    obj.pattern9(5);
    return 0;
}