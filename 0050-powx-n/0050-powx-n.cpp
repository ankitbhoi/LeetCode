class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long power=n;
        if(power<0){
            power= -1LL*n;
        }
        while(power){
            if(power%2==0){  //even
                x=x*x;
                power=power/2;
            }
            else{       //odd
                ans=ans*x;
                power=power-1;
            }
        }
        
        if(n<0){
            return double(1.0)/double(ans);
        }
        return ans;
    }
};