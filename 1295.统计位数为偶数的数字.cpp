#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(auto num:nums){
            if(to_string(num).length()%2==0){
                res++;
            }
        }
        return res;
    }
};
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(12);
    Solution S;
    int res = S.findNumbers(nums);
    cout<<res<<endl;
}