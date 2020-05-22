#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> res;
        string codes[] ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i=0;i<words.size();i++){
            string str;
            string word=words[i];
            for(int j=0;j<word.size();j++){
                str+=codes[word[j]-'a'];
            }
            res.insert(str);
        }
        return res.size();
    }
};