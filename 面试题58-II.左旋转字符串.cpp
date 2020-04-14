#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        string res="";
        for(int i=n;i<s.length();i++){
            res += s[i];
        }
        for(int i=0;i<n;i++){
            res += s[i];
        }
        return res;
    }
};

int main(){
    Solution S;
    string res = S.reverseLeftWords("abcd",2);
    cout<<res<<endl;
}