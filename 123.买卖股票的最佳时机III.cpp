#include <iostream>
#include <vector>
using namespace std;
#define MinN  0xc0c0c0c0;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int first_buy = MinN;
        int first_sell = 0;
        int second_buy = MinN;
        int second_sell = 0;
        for(int i=0;i<prices.size();i++){
            first_buy = max(first_buy, -prices[i]);
            first_sell = max(first_sell, prices[i]+first_buy);
            second_buy = max(second_buy, first_sell-prices[i]);
            second_sell = max(second_sell, prices[i]+second_buy);
        }
        return second_sell;
    }
};