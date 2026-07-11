class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int maxP = 0;

        while (r < prices.size()) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxP = max(maxP, profit);
            } else {
                l = l + 1;
            }
            r++;
        }

        while(l<prices.size())
        {
            if (prices[l] < prices[r-1]) 
            {
                int profit = prices[r-1] - prices[l];
                maxP = max(maxP, profit);
            }
            l++;
        }
        return maxP;
    }
};