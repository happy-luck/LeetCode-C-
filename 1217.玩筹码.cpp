#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int num1 = 0;
        int num2 = 0;
        for(int i=0;i<chips.size();i++){
            if(chips[i]%2==0){
                num1++;
            } else{
                num2++;
            }
        }
        return min(num2,num1);
    }
};

int main(){
    Solution S;
    vector<int> chips;
    chips.push_back(1);
    chips.push_back(2);
    chips.push_back(3);
    int res = S.minCostToMoveChips(chips);
    cout<<res<<endl;
}