class Solution {
public:
    
    bool canMakeSubsequence(string s, string p) {
        int n=s.length(), m=p.length(); 
        if(m>n) return false; // if pattern length is more than string length, then it cannot be subsequence
        
        int j=0;
        for(int i=0;i<n && j<m;i++){
            if(s[i] == p[j]){
                j++; 
            }else{
                int idx = (s[i]-'a');
                int new_idx = (idx+1)%26;
                
                char ch = (char)(new_idx+'a'); // get next character in circular fashion
                if(ch==p[j]){
                    j++;
                }
            }
        }
        
		// if after traversing both string and pattern, we reach end of pattern , then pattern is subsequence
        return (j==m); 
    }
};