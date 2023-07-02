class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        vector<bool> isPrime(n + 1, true);

        // Sieve of Eratosthenes to generate primes up to n
        for (int p = 2; p <= sqrt(n); p++) {
            if (isPrime[p]) {
                for (int i = p * p; i <= n; i += p) {
                    isPrime[i] = false;
                }
            }
        }

        for (int i = 2; i <= n / 2; i++) {
            int first = i;
            int second = n - i;
            if (isPrime[first] && isPrime[second]) {
                ans.push_back({first, second});
            }
        }

        return ans;
    }
};
