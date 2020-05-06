#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string S) {
        unordered_map<char, int> last;
        for(int i=0;i<S.length();i++){
            last[S[i]] = i;
        }
        int j=0;
        int anchor=0;
        vector<int> ans;
        for(int i=0;i<S.length();i++){
            j = max(j,last[S[i]]);
            if(i==j){
                ans.push_back(i-anchor+1);
                anchor = i+1;
            }
        }
        return ans;
    }
};