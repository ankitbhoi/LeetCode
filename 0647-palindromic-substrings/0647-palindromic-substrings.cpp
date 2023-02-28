class Solution {
public:
    int palincheck(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i =0;i<s.size();i++){
            //odd length condition
            int oddKaAns=palincheck(s,i,i);
            count=count+oddKaAns;
            //even length condition
            int evenKaAns=palincheck(s,i,i+1);
            count=count+evenKaAns;
        }
        return count;
    }
};


// odd wale case me sare lengths odd k hi honge if i-- and j++ kia jae to 1,3,5 and soo on..
// even wale case me sare lengths even honge 2,4,6 and so on..
// fir check krna hai ki agr current i j match karha hai to kya next i j v match krha hai?
// if yes then obvio palindrome hai 
// and if no then not palindrome so count nai krenge
// har bar yeh dimag me rakhna hai ki (i 0th index) se kam na ho jae and (j<s.length)