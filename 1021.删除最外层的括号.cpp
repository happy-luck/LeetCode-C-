#include <iostream>
#include <stack>
#include <string>
using namespace std;
// 方法一
// class Solution {
// public:
//     string removeOuterParentheses(string S) {
//         int L=1;int R=0;
//         string ans;
//         for(int i=1;i<S.size();i++){
//             if(S[i]=='(')L++;
//             else R++;
//             if(R!=L)ans.push_back(S[i]);
//             else {
//                 i++;L=1;R=0;
//             }
//         }
//         return ans;
//     }
// };

// 方法二
class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> mystack;
        string ans="";
        for(int i=0;i<S.size();i++){
            if (S[i]=='('){
                mystack.push(S[i]);
                if(mystack.size()>1){
                    ans+='(';}
            }
            else{
                mystack.pop();
                if (mystack.size()!=0){
                    ans += ')';}
            }
        }
        return ans;
    }
};

int main(){
    Solution S;
    string str = "(()())";
    string res = S.removeOuterParentheses(str);
    cout<<res<<endl;
}
