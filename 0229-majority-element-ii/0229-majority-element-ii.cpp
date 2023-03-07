class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Boyer Moore’s Voting Algorithm
        int c1=0,c2=0,num1=-1,num2=-1;
        //initially dono majority element na pata hone k vajahse dono ko -1 rakhe hai
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){  //checking first element already num1 ko assigned hai ki nai 
                c1++;
            }
            else if(nums[i]==num2){
                c2++;
            }
            else if(c1==0){
                num1=nums[i];
                c1=1;   //bcz pehla element already consider kr lerhe hai to increment it
            }
            else if(c2==0){
                num2=nums[i];
                c2=1;
            }
            else{
                //doosra element ara hai mtlb pehele wale ko decrement krenge
                c1--;
                c2--;
            }
        }
        vector<int>ans;
        c1=c2=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i] == num1)
      c1++;
    else if (nums[i] == num2)
      c2++;

        }
        if (c1 > nums.size() / 3)
    ans.push_back(num1);
  if (c2 > nums.size() / 3)
    ans.push_back(num2);
  return ans;
        
    }
};

// ISME BASICALLY COUNT RAKHA JARHA HAI DO ELEMENTS KA 
// JAHAN 0 HO JARHA HAI HAM DOOSRE ELEMENT K SATH UPDATE KR DERHE HAI 
