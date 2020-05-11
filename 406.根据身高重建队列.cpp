#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > reconstructQueue(vector<vector<int> >& people) {
        sort(people.begin(), people.end(),
                [](const vector<int>& lhs, const vector<int>& rhs) {
            if (lhs[1] == rhs[1]) { return lhs[0] > rhs[0]; }
            return lhs[1] < rhs[1];
        });
        vector<vector<int> > result;
        for (auto && p: people) {
            auto iter = result.begin();
            for (int cnt = 0; iter != result.end() && (cnt != p[1]); ++iter) {
                if ((*iter)[0] >= p[0]) { ++cnt; }
            }
            result.insert(iter, p);
        }
        return result;
    }
};