class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string ans="";
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;    // agr space aye piche to ignore mar dio
            }
            int j=i;
            if(i<0){
                break;  //taki leading spaces skip hote hote last ek space na lag jae
            }
            while(i>=0 && s[i]!=' '){
                i--;
                
            }
            if(ans.empty()){
                ans=ans+s.substr(i+1,j-i);
            }
            else{
                ans=ans+" "+s.substr(i+1,j-i);
            }
        }
        return ans;
    }
};