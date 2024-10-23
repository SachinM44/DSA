class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i < n; i++){
            sum = sum + nums[i];
        if(sum > maxi){
            maxi=sum;
        }
    if(sum<0){
        sum=0;
    }
        }
    return maxi; 
        
    }
};

////////////////////////////////////////////////////////
ans for the the guy who ask to print the the subarray with the the maximum value;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
	  int arrayStart=-1;
	  int arrayEnd=-1;
        int n = nums.size();
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0; i < n; i++){
        if(sum==0){
		start=i;
		};
            sum = sum + nums[i];
        if(sum > maxi){
            maxi=sum;
          arrayStart= start;
		arrayEnd=i;
        }
    if(sum<0){
        sum=0;
    }
        }
    return maxi; 
        
    }
};