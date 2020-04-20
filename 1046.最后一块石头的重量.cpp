#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        for(int i=0;i<stones.size();i++){
            int y = max_element(stones.begin(),stones.end())-stones.begin();
            int tmp = stones[y];
            stones[y] = 0;
            int x = max_element(stones.begin(),stones.end())-stones.begin();
            stones[x] = tmp-stones[x];   
        }
        return *max_element(stones.begin(),stones.end());
    }
};

int main(){
    vector<int> stones(6);
    stones[0] = 2;
    stones[1] = 7;
    stones[2] = 4;
    stones[3] = 1;
    stones[4] = 8;
    stones[5] = 1;
    Solution S;
    int res = S.lastStoneWeight(stones);
    cout<<res<<endl;
}