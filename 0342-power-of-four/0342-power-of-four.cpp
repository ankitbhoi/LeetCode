class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        bool flag=0;
        if(n%4==0){
            flag=1;
            flag=isPowerOfFour(n/4);
        }
        return flag;
    }
};