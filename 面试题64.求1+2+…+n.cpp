#include <iostream>
using namespace std;

class Solution {
public:
    int sumNums(int n) {
        if (n==0)
            return 0;
        return n+sumNums(n-1);
    }
};

int main(){
    Solution S;
    int res = S.sumNums(3);
    cout<<res<<endl;
}