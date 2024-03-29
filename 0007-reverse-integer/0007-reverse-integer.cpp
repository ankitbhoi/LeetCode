class Solution {
public:
    int reverse(int x) {
        int sum=0;
        while(x){
            if(sum>INT_MAX/10 || sum<INT_MIN/10){
                return 0;
            }else{
                int remainder = x%10;
                sum=sum*10 + remainder;
                x=x/10;
            }
        }
        return sum;
    }
};
