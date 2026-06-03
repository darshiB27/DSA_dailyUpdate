//1796:Second largest digit in an alphanumeric string

#include <iostream>
using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        int max = -1; 
        int sdmax = -1;
        for (int i= 0; i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                if( (s[i]-'0')>max )
                {
                    sdmax = max;
                    max = (s[i]-'0');
                }
                else if (((s[i]-'0')>sdmax) && ((s[i]-'0')!=max))
                {
                    sdmax= (s[i]-'0');
                }
            }
        }
        return sdmax;
    }
};
int main ()
{
    Solution obj;
    string s= "123abc";
    int result = obj.secondHighest(s);
    cout<<result;

    return 0;
}