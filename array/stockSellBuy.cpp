class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n= prices.size();
        int min_price=INT_MAX;
        int max_profit=0;
        for(int i=0; i< n ; i++){
            int price=prices[i];
            if(price < min_price){
                min_price= price;
            };
            int profit = price - min_price;
            if(profit>max_profit ){
                max_profit= profit;
            }
        }

        return max_profit; 
    }
};