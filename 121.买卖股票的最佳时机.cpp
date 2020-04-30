#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if( prices.size()==0){
            return 0;
        }
        int minprice = prices[0];
        int maxprofit = 0;
        for(int p:prices){
            maxprofit = max(maxprofit,p-minprice);
            minprice = min(minprice,p);
        }
        return maxprofit;
    }
};