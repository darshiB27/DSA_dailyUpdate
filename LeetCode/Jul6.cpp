//242. Valid Anagram
/*
Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
*/

#include <unordered_map>
#include<string>

using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>AnagraMap;
        for (int i=0;i<s.length();i++)
        {
            AnagraMap[s[i]]++;
        }
        for (int i=0;i<t.length();i++)
        {
            AnagraMap[t[i]]--;
        }
        for (const auto& it : AnagraMap) 
        {
            if (it.second != 0) return false;
        }
        /*for(const auto& [key,value]:AnagraMap)
        {
            if(value!=0) return false ;
        }*/
        return true;
    }
};