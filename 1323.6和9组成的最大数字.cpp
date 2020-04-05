#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for (char& ch: s) {
            if (ch == '6') {
                ch = '9';
                break;
            }
        }
        return stoi(s);
    }
};

int main(){
    Solution S;
    int res = S.maximum69Number(9699);
    cout<<res<<endl;
}