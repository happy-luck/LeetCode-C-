#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int balance = 0;
        int res = 0;
        for(int i=0;i<s.length();i++){
            if (s[i]=='L'){
                balance++;
            }
            if(s[i]=='R'){
                balance--;
            }
            if(balance==0){
                res++;
            }
        }
        if(res==0){
            return 1;
        }
        else {
            return res;
        }
    }
};
int main(){
    string s = "RLRRLLRLRL";
    Solution S;
    int res = S.balancedStringSplit(s);
    cout<<res<<endl;
}