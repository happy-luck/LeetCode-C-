#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> deq;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            while(!deq.empty() && nums[i] > nums[deq.back()]){
                deq.pop_back();
            }
            if (!deq.empty() && deq.front() < i - k + 1) deq.pop_front();
            deq.push_back(i);
            if (i >= k -1) ans.push_back(nums[deq.front()]);
        }
        return ans;

    }
};

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(-1);
    int k = 2;
    Solution S;
    vector<int> ans = S.maxSlidingWindow(v,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
}
