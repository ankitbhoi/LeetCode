class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        for(auto i:s){
            if(i=='(' or i=='{' or i=='['){
                st.push(i);
            } 
            else {
                if(st.empty()) return false;
                char ch= st.top();
                st.pop();
                if((ch=='(' and i==')') or (ch=='{' and i=='}') or (ch=='[' and i==']')){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};