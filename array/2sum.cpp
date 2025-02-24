// class Solution {
//     public:
//         vector<int> twoSum(vector<int>& nums, int target) {
//             int n=nums.size();
//             for(int i=0;i<n;i++){
//                 for( int j=i+1; j<n;j++ ){
//                     if(nums[i]+nums[j]==target){
//                         return {i,j};
//                     }
//                 }
//             }
//             return {};
//         }
//     };
//////////////////////////////////
///in js
function twoSum(nums, target){
    let n=nums.lenght();
    for(let i=0; i<n ; i++){
        for(let j=i+1; j<n; j++){
            if(nums[i]+nums[j]===target){
                return [i,j]// in the cpp u use vector , so you have to use {} insted of []
            }
        }
        return [];
    }
} ;