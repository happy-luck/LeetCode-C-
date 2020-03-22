#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> vec;
        int a[2]={1,2};
        for(int i=0;i<nums.size();i++){
            if(map.find(target-nums[i]) != map.end())
                return {map[target-nums[i]],i};
            map[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    int a[5]={2,7,3,1,15};
    vector<int> nums(a,a+5);
    int target = 9;
    
    Solution S;
    vector<int> res = S.twoSum(nums,target);
    cout<<res[0]<<res[1]<<endl;

};
