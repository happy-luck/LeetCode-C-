#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;
        if(n%2==1){
            res.push_back(0);
        }
        for(int i=1;i<n/2+1;i++){
            res.push_back(i);
            res.push_back(-i);
        }
        return res;
    }
};