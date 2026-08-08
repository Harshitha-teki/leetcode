class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mi=prices[0], ma =0;
        for(int i=1; i<n; i++){
            if(prices[i]<prices[i-1]){
                mi = min(mi,prices[i]);
            }
            else{
                ma = max(ma,prices[i]-mi);
            }
            
        }
        return ma;
    }
};