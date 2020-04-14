#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> res;
        for(int i=1;i<pow(10,n);i++){
            res.push_back(i);
        }
        return res;
    }
};
int main(){
    Solution S;
    vector<int> res = S.printNumbers(1);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}