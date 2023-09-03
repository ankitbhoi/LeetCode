class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0 ;
        for(int i=low;i<=high;i++){
            string str=to_string(i);
            if(i>9 && i<100){
                if(str[0]==str[1]){
                    count++;
                }
            }
            if(i>999 && i<10000){
                if ((str[0] - '0' + str[1] - '0') == (str[2] - '0' + str[3] - '0')) {
    count++;
}

            }
        }
        return count;
    }
};