#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n,0);
        vector<pair<int,int> > tmp;
        tmp.clear();
        for(int i=0; i<n;i++){
            tmp.push_back(make_pair(nums[i],i));
        }
        sort(tmp.begin(),tmp.end());
        int pre = -1;
        for(int i=0; i<n;i++){
            if(i!=0 && tmp[i].first!=tmp[i-1].first){
                pre = i - 1;
            }
            vec[tmp[i].second] = pre + 1;
        }
        return vec;
    }
};