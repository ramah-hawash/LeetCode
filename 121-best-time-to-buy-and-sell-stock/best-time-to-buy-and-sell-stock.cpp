class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];      // أقل سعر شفناه لحد الآن
        int maxProfit = 0;             // أكبر ربح ممكن نحققه

        for (int i = 1; i < prices.size(); i++) {
            // إذا وجدنا سعر أقل من أقل سعر سابق، نحدثه
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            // نحسب الربح في هذا اليوم ونحدث أقصى ربح إذا لازم
            else {
                int profit = prices[i] - minPrice;
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }

        return maxProfit;
    }
};
