class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX,ans=0;
        for(auto it:prices)
        {
            minPrice=min(minPrice,it);
            ans=max(ans,it-minPrice);
        }
        return ans;
    }
};
