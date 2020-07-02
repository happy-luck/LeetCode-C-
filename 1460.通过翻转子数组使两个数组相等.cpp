#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        return arr==target;
    }
};