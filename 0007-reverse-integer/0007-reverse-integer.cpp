class Solution {
public:
    int reverse(int x)
    {
        long sum=0;
        while(x)
        {
            int remainder=x%10;
            sum=sum*10 + remainder;
            x/=10;  
        }    
        if(sum>INT_MAX || sum<INT_MIN)
            return 0;
        return int(sum);
    }
};