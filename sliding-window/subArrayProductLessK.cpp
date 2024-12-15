class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        if(k <= 1) return 0;
        int product=1 , count=0;
        int l =0;
        for(int r=0; r<n ; r++ ){
            product *=nums[r];
            while(product >=k){
                product /= nums[l];
                l++;
            }
            count += r-l+1;
        }
        return count;
    }
};
// her ethe tirck is find the sub array one by one and keep track of number of array genaretd and push to value to variable and if the variable is
// reached the k reaturn the last sub array countz
// here they are asking the product (means X*X ) but not the count 