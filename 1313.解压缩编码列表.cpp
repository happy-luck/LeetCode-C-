#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i+=2){
            int t = nums[i];
            while(t){
                res.push_back(nums[i+1]);
                t--;
            }
        }
        return res;
    }
};