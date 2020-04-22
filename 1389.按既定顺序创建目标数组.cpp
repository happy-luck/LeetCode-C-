#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector <int> r;
        for (unsigned i = 0; i < nums.size(); ++i) {
            r.insert(r.begin() + index[i], nums[i]);
        }
        return r;
    }
};