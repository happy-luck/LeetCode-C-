#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<right+1;i++){
            bool tar = true;
            int t = i;
            while(t){
                int tmp = t%10;
                if(tmp==0 or i%tmp!=0){
                    tar = false;
                    break;
                } else {
                    t = t/10;
                }
            }
            if(tar){
                res.push_back(i);
            }
        }
        return res;
    }
};
int main(){
    Solution S;
    vector<int> res = S.selfDividingNumbers(1,22);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}