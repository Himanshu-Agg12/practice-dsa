class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        if(n <= 1){
            return 0;
        }
        int buy = p[0];
        int sell = -1, profit = 0;
        for(int i = 1; i < n; i++){
            if(p[i] <= buy){
                buy = p[i];
            }else{
                sell = p[i];
                profit = max(profit, sell-buy);
            }
        }
        return profit;
    }
};
