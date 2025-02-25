class Solution {
    public:
        int maxScore(vector<int>& cardPoints, int k) {
          int n = cardPoints.size();
          int currSum=0;
          for(int i=0; i<k; i++ ){
             currSum+=cardPoints[i];
          }
          int   maxSum=currSum;
            for(int i=0; i<k; i++){
             currSum= currSum-cardPoints[k-1-i]+cardPoints[n-1-i];
            
            maxSum=max(maxSum, currSum);
            }
            return maxSum;
        }
    };