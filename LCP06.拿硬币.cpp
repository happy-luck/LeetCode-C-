#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minCount(vector<int>& coins) {
        int res = 0;
        for(auto && c:coins){
            res += (c+1)/2;
        }
        return res;
    }
};