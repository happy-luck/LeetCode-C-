#include <iostream>
#include <stack>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(char &c:s){
            if(c=='('|| c=='[' || c=='{'){
                mystack.push(c);
            }
            else{
                if(c==')' && mystack.top()!='(') return false;
                if(c==']' && mystack.top()!='[') return false;
                if(c=='}' && mystack.top()!='{') return false;
                mystack.pop();
            }
        }
        return mystack.empty();
    }
};

int main(){
    Solution S;
    string str = "()[]{}";
    bool res = S.isValid(str);
    cout<<res<<endl;
}