class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int fp=0;
        int sp=0;
        while(sp<=nums.size()-1){
            if(nums[fp]==0){ //0
                if(nums[sp]!=0){  //0 //1
                    swap(nums[fp],nums[sp]);
                    fp++;
                    sp++;
                }
                else{     //0 //0
                    sp++;
                }
            }
            else if(nums[sp]!=0){ //1  //1
                    fp++;
                    sp++;
            }
        }
    }
};