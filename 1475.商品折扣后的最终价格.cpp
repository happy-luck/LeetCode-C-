#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        int len = prices.size();
        for(int i=0;i<len;i++){
                while(!s.empty() && prices[i] <= prices[s.top()]){
                    int temp = s.top();
                    prices[temp] -= prices[i];
                    s.pop();
            }
            s.push(i);  //保存索引，方便再次在prices中找到这个元素
        }
        return prices;
    }
};