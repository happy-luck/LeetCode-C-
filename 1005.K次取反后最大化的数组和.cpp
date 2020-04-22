#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(),A.end());
        int change_times = 0;
        while(A[change_times]<0){
            A[change_times] *= -1;
            change_times ++;
            if (change_times>=K){
                break;
            }
        }
        if((K-change_times)%2){
            return accumulate(A.begin(),A.end(),0)-*min_element(A.begin(),A.end())*2;
        } else{
            return accumulate(A.begin(),A.end(),0);
        }
    }
};

int main(){
    vector<int> stones(6);
    stones[0] = 2;
    stones[1] = 7;
    stones[2] = -4;
    stones[3] = 1;
    stones[4] = 8;
    stones[5] = 1;
    Solution S;
    int res = S.largestSumAfterKNegations(stones,1);
    cout<<res<<endl;
}

