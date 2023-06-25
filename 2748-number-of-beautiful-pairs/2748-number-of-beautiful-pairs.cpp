class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    
    int firstDigit(int n){
        while (n >= 10){
            n /= 10;
        }
        return n;
    }
    
    int lastDigit(int n){
        return (n % 10);
    }

    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int last = lastDigit(nums[j]);
                int first = firstDigit(nums[i]);
                if (gcd(first, last) == 1) {
                    count++;
                }
            }
        }
        return count;
    }
};
