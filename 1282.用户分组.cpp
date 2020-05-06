#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<int> > groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> groups;
        for (int i = 0; i < groupSizes.size(); ++i) {
            groups[groupSizes[i]].push_back(i);
        }
        vector<vector<int> > ans;
        for (auto group = groups.begin(); group != groups.end(); ++group) {
            const int& gsize = group->first;
            vector<int>& users = group->second;
            for (auto iter = users.begin(); iter != users.end(); iter = next(iter, gsize)) {
                vector<int> dummy(iter, next(iter, gsize));
                ans.push_back(dummy);
            }
        }
        return ans;

    }
};