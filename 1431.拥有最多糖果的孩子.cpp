#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max_ = *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(max_-candies[i]<=extraCandies){
                res.push_back(true);
            } else{
                res.push_back(false);
            }
        }
        return res;
    }
};