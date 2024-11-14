class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int MaxSum=0;
        int n=cardPoints.size();
        for(int i=0; i < k; i++ ){
            lsum = lsum +  cardPoints[i];
            MaxSum=lsum;
        };
        int rIndex=n-1;
        for(int i=k-1; i >=0; i--){
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[rIndex];
            rIndex--;
    MaxSum=max(MaxSum,lsum+rsum);
        };
    return  MaxSum ;
    }
};