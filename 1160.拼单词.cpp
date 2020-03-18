#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> chars_cnt;
        for(int i=0;i<chars.size();i++)
            ++chars_cnt[chars[i]];
        int ans = 0;
        for( int j=0;j<words.size();j++) {
            unordered_map<char, int> word_cnt;
            bool is_ans = true;
            int len = words[j].size();
            for (int u=0;u<len;u++)
            {
                ++word_cnt[words[j][u]];
                if (chars_cnt[words[j][u]] < word_cnt[words[j][u]]) {
                    is_ans = false;
                    break;
                }
            }
            if (is_ans)
                ans += len;
        }
        return ans;
    }
};
int main()
{
    string A = "cat";
    string B = "bt";
    string C = "hat";
    string D = "tree";
    string chars = "atach";
    //A.push_back里必须是vector
    vector<string> words;
    words.push_back(A);
    words.push_back(B);
    words.push_back(C);
    words.push_back(D);
    Solution S;
    int ans = S.countCharacters(words,chars);
    printf("%d\n", ans);
};