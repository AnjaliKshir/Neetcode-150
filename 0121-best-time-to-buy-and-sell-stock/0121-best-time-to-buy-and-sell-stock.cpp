class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int max_profit=0;
        int n = size(prices);
        while(right<n)
        {
            if(prices[left]>prices[right])
            {
                left = right;
                right++;
            }
            else
            {
                int current_profit = prices[right]-prices[left];
                max_profit = max(current_profit, max_profit);
                right++;
            }
        }
        return max_profit;
    }
};