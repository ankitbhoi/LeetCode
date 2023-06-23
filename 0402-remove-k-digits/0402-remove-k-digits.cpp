class Solution {
public:
     string removeKdigits(string num, int k)
     {   stack<char> st;
         string ans;
         if(num.length()==k)
            return "0";
         // st.push(num[0]);
         for(int i=0;i<num.length();i++)
         {
             while(!st.empty() && st.top()>num[i] && k>0)
             {
                   st.pop();
                   k--;
             }
            st.push(num[i]);
        }
        while(!st.empty() && k>0)
         {
            st.pop();
            k--;
         }
         while(!st.empty())
         {
            ans.push_back(st.top());
            st.pop();
         }
         reverse(ans.begin(),ans.end());
         while (!ans.empty() && ans.front() == '0') {
            ans.erase(ans.begin());
        }

        return ans.empty() ? "0" : ans;
     }
       
};