class Solution {
public:
    int maxArea(vector<int>& height) {
        //so here lets consider between 2 2 poles , 1, and last one , in that check the min hiht of the pole which is first one , then here calculate the area between those poles , since its lets && if u should keep another anology is that if the what ever the small one is there it will cause less whater to hold , so what u do is , move the pointer which which side has less 
     int maxArea=0;
     int n=height.size();
     int i=0, j=n-1;
     while(i<j){
        int minheight=min(height[i],height[j]);
        int width= minheight * (j-i);
         maxArea=max(width, maxArea );
        if(height[i]<height[j]){
            ++i;
        }else{
            --j;
        }
     };
     return maxArea;

    };
};