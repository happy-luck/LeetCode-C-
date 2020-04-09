#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0 ||(x!=0 && x%10==0)) {
           return false;
       }
       int reverseN = 0;
       while(x>reverseN){
           reverseN = reverseN*10+x%10;
           x/=10;
       }
       return x==reverseN || x==reverseN/10;
    }
};
int main(){
    int x = 12311;
    Solution S;
    int res = S.isPalindrome(x);
    cout<<res<<endl;
}