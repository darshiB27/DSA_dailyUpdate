#include<iostream>
using namespace std;
class Solution {
public:
    void pattern10(int n) 
    {
        int binary=1;
        for (int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%2!=0){
                    if(j%2==0) 
                    {
                        cout<<"0 ";
                        binary++;
                    }
                    else 
                    {
                        cout<<"1 ";
                        binary--;
                    }
                }
                else {
                {
                    if(j%2!=0) 
                    {
                        cout<<"0 ";
                        binary++;
                    }
                    else 
                    {
                        cout<<"1 ";
                        binary--;
                    }
                }
                }
            }
            cout<<endl;
        }
    }
};
int main()
{
    Solution obj;
    obj.pattern10(5);
    return 0;
}