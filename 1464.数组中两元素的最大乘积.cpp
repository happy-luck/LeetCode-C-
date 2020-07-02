#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_one;
        int max_two;
        if(nums[0]>nums[1]){
            max_one = nums[0];
            max_two = nums[1];
        } else{
            max_one = nums[1];
            max_two = nums[0];
        }
        for(int i=2;i<nums.size();i++){
            if(nums[i]>max_one){
                max_two = max_one;
                max_one = nums[i];
            } else if(nums[i]>max_two){
                max_two = nums[i];
            }
        }
        return (max_two-1)*(max_one-1);
    }
};