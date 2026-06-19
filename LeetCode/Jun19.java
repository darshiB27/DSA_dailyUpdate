//58. Length of Last Word

class Solution {
    public int lengthOfLastWord(String s) {
        s=s.trim(); int n=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            char ch=s.charAt(i);
            if(ch!=' ') n++;
            else return n;
        }
        return n ;
    }
}

