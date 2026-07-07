//3754. Concatenate Non-Zero Digits and Multiply by Sum I

class Solution {
public:
    long long sumAndMultiply(int n)
    {
        long long x=0;int sum=0;int m=1;
        while(n>0)
        {
            if(n%10!=0)
            {
                int d=n%10;
                x=(d*m)+x;
                m=m*10;
                sum+=n%10;
            }
            n=n/10;
        }
        return (x*sum);
    }
};