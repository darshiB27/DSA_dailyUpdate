//58. Length of Last Word

import java.util.Scanner;
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
public class Jun19
{
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter String");
        String str= sc.nextLine();
        Solution obj= new Solution();
        int n= obj.lengthOfLastWord(str);
        System.out.println("Length of last word = "+n);
        sc.close();
    }
}
