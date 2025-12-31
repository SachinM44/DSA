class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i;
        int j=1;
        ///here have to keep one count varibale to track number of unique elemt , and the 
        //array which only containes the unique element only
        ///here i should start from 1th  
        for(int i=1; i<nums.size(); i++){
                if(nums[i]!=nums[j-1]){
                    nums[j]=nums[i];
                    j++;
                };
            };
        return j;
    };
};