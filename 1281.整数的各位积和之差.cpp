#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1;
        int add = 0;
        while(n>0){
            int x = n % 10;
            mul *= x;
            add += x;
            n /= 10;
        }
        return mul-add;
    }
};
int main(){
    int n = 234;
    Solution S;
    int res = S.subtractProductAndSum(n);
    cout<<res<<endl;
}