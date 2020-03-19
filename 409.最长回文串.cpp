#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        unordered_map<char, int> ::iterator iter;
        int ans = 0;
        for(int i=0;i<s.size();i++)
        {
            ++count[s[i]];
        }
        iter = count.begin();
        while( iter != count.end())      
        {
            int v = iter->second;
            ans += v / 2 * 2;
            if (v % 2 == 1 and ans % 2 == 0)
                ++ans;
            ++iter;
        }
        return ans;
    }
};
int main(){
    string s = "atats";
    Solution S;
    int ans = S.longestPalindrome(s);
    cout<<ans<<endl;
}