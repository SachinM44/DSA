class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> window;
        long long currSum=0 , maxSum =0;
        int n=nums.size();
        for (int i=0, j=0; j<n; j++ ){
            while(window.count(nums[j])){
                window.erase(nums[i]);
                currSum -=nums[i];
                i++;
            }

            window.insert(nums[j]);
            currSum += nums[j];
           // j++;
        
        if(j - i + 1 == k ){
            maxSum = max(maxSum, currSum);
             window.erase(nums[i]);
                currSum -=nums[i];
                ++i;
        }
        }
        
    return maxSum;
    }
};