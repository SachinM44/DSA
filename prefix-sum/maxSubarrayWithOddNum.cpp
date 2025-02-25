

class Solution {
    public:
        int numOfSubarrays(vector<int>& nums) {
            int MOD = 1e9 + 7;
            int oddCount = 0, evenCount = 1; // evenCount initialized to 1 for the case when prefixSum itself is even
            int prefixSum = 0, result = 0;
            
            for (int num : nums) {
                prefixSum += num;
                if (prefixSum % 2 == 0) {
                    result = (result + oddCount) % MOD;
                    evenCount++;
                } else {
                    result = (result + evenCount) % MOD;
                    oddCount++;
                }
            }
            
            return result;
        }
    };
    