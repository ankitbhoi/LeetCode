#include <string>
#include <stack>
#include <algorithm>

class Solution {
public:
    std::string removeKdigits(std::string num, int k) {
        std::stack<char> st;
        std::string ans;

        if (num.length() == k)
            return "0";

        for (char c : num) {
            while (!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        while (!ans.empty() && ans.front() == '0') {
            ans.erase(ans.begin());
        }

        return ans.empty() ? "0" : ans;
    }
};
