#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
// 方法一
    string compressString(string S) {
        int N = S.length();
        string res;
        int i = 0;
        while (i < N) {
            int j = i;
            while (j+1 < N && S[j+1] == S[i]) {
                j++;
            }
            res += S[i];
            res += to_string(j - i+1);
            i = j+1;
        }

        if (res.length() < S.length()) {
            return res;
        } else {
            return S;
        }
    }
// 方法二
    // string compressString(string S) {
    //     if((int)S.length()==0) return S;
    //     string ans = "";
    //     int cnt = 0;
    //     char ch = S[0];
    //     for(int i=0;i<S.length();i++){
    //         if (S[i]==ch) cnt++;
    //         else{
    //             ans += ch + to_string(cnt); // 注意 cnt 要转为字符串
    //             ch = S[i];
    //             cnt = 1;
    //         }
    //     }
    //     ans += ch + to_string(cnt);
    //     return S.length()<=ans.length() ? S : ans;
    // }
};

int main()
{
    string A="aabcccccaaa";
    string B="abbccd";

    Solution S;
    string ans1 = S.compressString(A);
    cout<<ans1<<endl;
    string ans2 = S.compressString(B);
    cout<<ans2<<endl;
};