//1903 : largest odd number in a string 
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.length() - 1; i >= 0; i--) 
        {
            if ((num[i] - '0') % 2 != 0) 
            {
                return num.substr(0, i+1);
            } 
        }
        return "";
    }
};
int main() {
    
    Solution obj;
    
    string num = "35427";
    string result = obj.largestOddNumber(num);
    
    cout << "Largest odd number substring: " << result << endl;
    
    return 0;
}
