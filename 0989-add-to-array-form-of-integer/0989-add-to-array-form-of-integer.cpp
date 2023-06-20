class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int i = n - 1;
        int carry = 0;

        while (k > 0 || carry > 0) {
            if (i >= 0) {
                int sum = num[i] + k % 10 + carry;
                num[i] = sum % 10;
                carry = sum / 10;
                i--;
            } else {
                int sum = k % 10 + carry;
                num.insert(num.begin(), sum % 10);
                carry = sum / 10;
            }
            k /= 10;
        }

        return num;
    }
};
