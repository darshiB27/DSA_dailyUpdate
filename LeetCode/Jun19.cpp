//58. Length of Last Word
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int n=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ') n++;
            if(s[i]==' ' && n>0) return n;
        }
        return n ;
    }
};