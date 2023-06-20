class Solution {
public:
    const int MOD = 1e9 + 7;
    
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<pair<int, int>> stk1, stk2;

        for (int i = 0; i < n; i++) {
            int count = 1;
            while (!stk1.empty() && stk1.top().first > arr[i]) {
                count += stk1.top().second;
                stk1.pop();
            }
            stk1.push({ arr[i], count });
            left[i] = count;
        }

        for (int i = n - 1; i >= 0; i--) {
            int count = 1;
            while (!stk2.empty() && stk2.top().first >= arr[i]) {
                count += stk2.top().second;
                stk2.pop();
            }
            stk2.push({ arr[i], count });
            right[i] = count;
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = (ans + static_cast<long long>(arr[i]) * left[i] * right[i]) % MOD;
        }

        return ans;
    }
};
