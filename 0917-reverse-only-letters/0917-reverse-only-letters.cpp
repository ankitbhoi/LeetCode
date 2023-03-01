class Solution {
public:
    string reverseOnlyLetters(string s) {
        int st=0;
        int lt=s.length()-1;
        while(st<lt){
            if(!(isalpha(s[st]))){
            st++;
            }
            else if(!(isalpha(s[lt]))){
                lt--;
            }
            else{
               swap(s[st++],s[lt--]) ;
            }
        }
        return s;
        
    }
};